#pragma once

#include <string>

void letters_to_nums(char& letter)
{
    switch (letter) {
    case 'a':
        letter = '1';
        break;

    case 'b':
        letter = '2';
        break;

    case 'c':
        letter = '3';
        break;

    case 'd':
        letter = '4';
        break;

    case 'e':
        letter = '5';
        break;

    case 'f':
        letter = '6';
        break;

    case 'g':
        letter = '7';
        break;

    case 'h':
        letter = '8';
        break;

    default:
        break;
    }
}

void make_html_game(std::string file_name)
{
    extern std::string field[9][9];
    make_html(make_filed(field));

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

            field[0][0] = move_num + move;

            letters_to_nums(move[move.size() - 5]);
            letters_to_nums(move[move.size() - 2]);

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

            field[y2][x2] = field[y1][x1];
            field[y1][x1] = "";

            make_html(make_filed(field));
        }

    } while (game_rec.is_open());
}