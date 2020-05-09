#include "Field.hpp"
#include <string>

Field::Field()
{
}

std::string Field::make_html_head()
{
    std::string buff = R"(
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>chessviz</title>
<style type="text/css">
table.chessboard {
border: 5px solid #333;
border-collapse: collapse;
height: 320px;
margin: 20px;
width: 320px;
}
table.chessboard caption {
text-align: left;
}
table.chessboard td {
background-color: #fff;
font-size: 25px;
height: 40px;
text-align: center;
vertical-align: middle;
width: 40px;
}
table.chessboard tr:nth-child(odd) td:nth-child(even),
table.chessboard tr:nth-child(even) td:nth-child(odd) {
background-color: #999;
}

table.chessboard .white.king:before   { content: "\2654"; }
table.chessboard .white.queen:before  { content: "\2655"; }
table.chessboard .white.rook:before   { content: "\2656"; }
table.chessboard .white.bishop:before { content: "\2657"; }
table.chessboard .white.knight:before { content: "\2658"; }
table.chessboard .white.pawn:before   { content: "\2659"; }

table.chessboard .black.king:before   { content: "\265A"; }
table.chessboard .black.queen:before  { content: "\265B"; }
table.chessboard .black.rook:before   { content: "\265C"; }
table.chessboard .black.bishop:before { content: "\265D"; }
table.chessboard .black.knight:before { content: "\265E"; }
table.chessboard .black.pawn:before   { content: "\265F"; }
</style>
</head>
)";
    return buff;
}

std::string Field::make_html_board()
{
    std::string buff = R"(
<body>
<table class="chessboard">
    <caption>)"
            + field[0][0] + R"(</caption>
    <tr>
    <td>)" + field[8][1]
            + R"(</td>
    <td>)" + field[8][2]
            + R"(</td>
    <td>)" + field[8][3]
            + R"(</td>
    <td>)" + field[8][4]
            + R"(</td>
    <td>)" + field[8][5]
            + R"(</td>
    <td>)" + field[8][6]
            + R"(</td>
    <td>)" + field[8][7]
            + R"(</td>
    <td>)" + field[8][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[7][1]
            + R"(</td>
    <td>)" + field[7][2]
            + R"(</td>
    <td>)" + field[7][3]
            + R"(</td>
    <td>)" + field[7][4]
            + R"(</td>
    <td>)" + field[7][5]
            + R"(</td>
    <td>)" + field[7][6]
            + R"(</td>
    <td>)" + field[7][7]
            + R"(</td>
    <td>)" + field[7][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[6][1]
            + R"(</td>
    <td>)" + field[6][2]
            + R"(</td>
    <td>)" + field[6][3]
            + R"(</td>
    <td>)" + field[6][4]
            + R"(</td>
    <td>)" + field[6][5]
            + R"(</td>
    <td>)" + field[6][6]
            + R"(</td>
    <td>)" + field[6][7]
            + R"(</td>
    <td>)" + field[6][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[5][1]
            + R"(</td>
    <td>)" + field[5][2]
            + R"(</td>
    <td>)" + field[5][3]
            + R"(</td>
    <td>)" + field[5][4]
            + R"(</td>
    <td>)" + field[5][5]
            + R"(</td>
    <td>)" + field[5][6]
            + R"(</td>
    <td>)" + field[5][7]
            + R"(</td>
    <td>)" + field[5][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[4][1]
            + R"(</td>
    <td>)" + field[4][2]
            + R"(</td>
    <td>)" + field[4][3]
            + R"(</td>
    <td>)" + field[4][4]
            + R"(</td>
    <td>)" + field[4][5]
            + R"(</td>
    <td>)" + field[4][6]
            + R"(</td>
    <td>)" + field[4][7]
            + R"(</td>
    <td>)" + field[4][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[3][1]
            + R"(</td>
    <td>)" + field[3][2]
            + R"(</td>
    <td>)" + field[3][3]
            + R"(</td>
    <td>)" + field[3][4]
            + R"(</td>
    <td>)" + field[3][5]
            + R"(</td>
    <td>)" + field[3][6]
            + R"(</td>
    <td>)" + field[3][7]
            + R"(</td>
    <td>)" + field[3][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[2][1]
            + R"(</td>
    <td>)" + field[2][2]
            + R"(</td>
    <td>)" + field[2][3]
            + R"(</td>
    <td>)" + field[2][4]
            + R"(</td>
    <td>)" + field[2][5]
            + R"(</td>
    <td>)" + field[2][6]
            + R"(</td>
    <td>)" + field[2][7]
            + R"(</td>
    <td>)" + field[2][8]
            + R"(</td>
    </tr>
    <tr>
    <td>)" + field[1][1]
            + R"(</td>
    <td>)" + field[1][2]
            + R"(</td>
    <td>)" + field[1][3]
            + R"(</td>
    <td>)" + field[1][4]
            + R"(</td>
    <td>)" + field[1][5]
            + R"(</td>
    <td>)" + field[1][6]
            + R"(</td>
    <td>)" + field[1][7]
            + R"(</td>
    <td>)" + field[1][8]
            + R"(</td>
    </tr>
</table>
</body>)";

    return buff;
}

std::string Field::close_html_code()
{
    std::string buff = R"(
</html>
    )";
    return buff;
}

void Field::set_move_name(std::string name)
{
    field[0][0] = name;
}

void Field::move(int x1, int y1, int x2, int y2)
{
    field[y2][x2] = field[y1][x1];
    field[y1][x1] = "";
}