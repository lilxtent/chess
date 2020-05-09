#pragma once

class Field {
private:
    std::string field[9][9]
            = {{""},
               {"",
                "<span class=\"white rook\"></span>",
                "<span class=\"white knight\"></span>",
                "<span class=\"white bishop\"></span>",
                "<span class=\"white queen\"></span>",
                "<span class=\"white king\"></span>",
                "<span class=\"white bishop\"></span>",
                "<span class=\"white knight\"></span>",
                "<span class=\"white rook\"></span>"},
               {"",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>",
                "<span class=\"white pawn\"></span>"},
               {"", "", "", "", "", "", "", "", ""},
               {"", "", "", "", "", "", "", "", ""},
               {"", "", "", "", "", "", "", "", ""},
               {"", "", "", "", "", "", "", "", ""},
               {"",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>",
                "<span class=\"black pawn\"></span>"},
               {"",
                "<span class=\"black rook\"></span>",
                "<span class=\"black knight\"></span>",
                "<span class=\"black bishop\"></span>",
                "<span class=\"black queen\"></span>",
                "<span class=\"black king\"></span>",
                "<span class=\"black bishop\"></span>",
                "<span class=\"black knight\"></span>",
                "<span class=\"black rook\"></span>"}};

public:
    Field()
    {
    }
};