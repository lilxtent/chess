#include <iostream>
#include <string>

#include "file.hpp"
#include "make_html.hpp"

std::string field[9][9]
        = {{""},
           {"",
            "<span class=\"black rook\"></span>",
            "<span class=\"black knight\"></span>",
            "<span class=\"black bishop\"></span>",
            "<span class=\"black queen\"></span>",
            "<span class=\"black king\"></span>",
            "<span class=\"black bishop\"></span>",
            "<span class=\"black knight\"></span>",
            "<span class=\"black rook\"></span>"},
           {"",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>",
            "<span class=\"black pawn\"></span>"},
           {"", "", "", "", "", "", "", "", ""},
           {"", "", "", "", "", "", "", "", ""},
           {"", "", "", "", "", "", "", "", ""},
           {"", "", "", "", "", "", "", "", ""},
           {"",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>",
            "<span class=\"white pawn\"></span>"},
           {"",
            "<span class=\"white rook\"></span>",
            "<span class=\"white knight\"></span>",
            "<span class=\"white bishop\"></span>",
            "<span class=\"white queen\"></span>",
            "<span class=\"white king\"></span>",
            "<span class=\"white bishop\"></span>",
            "<span class=\"white knight\"></span>",
            "<span class=\"white rook\"></span>"}};

int main(int argc, char* argv[])
{
    std::string file_name = "";
    file_name = argv[1];

    make_html_game(file_name);

    system("xdg-open chess_html.html");

    return 0;
}