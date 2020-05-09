#include "File.hpp"
#include "Converter.hpp"
#include "Field.hpp"

File::File()
{
}

void File::add_to_html(std::string format_html, std::string path)
{
    std::ofstream file;
    file.open(path, std::ios::out | std::ios::app);

    if (!file.is_open()) {
        std::cout << "No such file" << std::endl;
        return;
    }

    file << format_html;

    file.close();
}

void File::to_html(std::string file_name)
{
    Field game_field;
    add_to_html(game_field.make_html_head());

    std::ifstream game_rec;
    game_rec.open(file_name, std::ios::out);

    if (!game_rec.is_open()) {
        std::cout << "No such file" << std::endl;
        return;
    }

    std::string move = "";
    std::string move_num = "";

    do {
        game_rec >> move;

        if (move[move.size() - 1] == '.') {
            move_num = move;
            move_num += " ";
        } else if (move != " ") {
            if (move[move.size() - 1] == '#') {
                game_rec.close();

                std::string buff = move;
                move = "";
                for (unsigned int i = 0; i < buff.size() - 1; i++) {
                    move += buff[i];
                }
            }

            // field[0][0] = move_num + move;
            game_field.set_move_name(move_num + move);

            Converter convert;
            convert.letters_to_nums(move[move.size() - 5]);
            convert.letters_to_nums(move[move.size() - 2]);

            int x1 = move[move.size() - 5];
            int y1 = move[move.size() - 4];
            int x2 = move[move.size() - 2];
            int y2 = move[move.size() - 1];

            x1 -= 48;
            y1 -= 48;
            x2 -= 48;
            y2 -= 48;

            //Проверка на границы хода
            if ((x1 > 8 || x1 < 1) || (x2 > 8 || x2 < 1) || (y1 > 8 || y1 < 1)
                || (y2 > 8 || y2 < 1)) {
                std::cout << "Wrong move: out of field" << std::endl;
                game_rec.close();
                return;
            }

            // field[y2][x2] = field[y1][x1];
            // field[y1][x1] = "";
            game_field.move(x1, y1, x2, y2);

            add_to_html(game_field.make_html_board());
        }

    } while (game_rec.is_open());

    add_to_html(game_field.close_html_code());
}