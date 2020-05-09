#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch2.hpp"

#include "../src/Converter.cpp"
#include "../src/Field.cpp"
#include "../src/File.cpp"

// Converter::letters_to_nums
TEST_CASE("Letters converts to nums correctly")
{
    char letter;
    char num;

    Converter convert;

    for (int i = 97; i < 97 + 8; i++) {
        letter = i;
        num = letter - 48;
        convert.letters_to_nums(letter);
        REQUIRE(letter == num);
    }
}
// Field::make_html_head & Field::close_html_code
TEST_CASE("Static HTML template generate correctly")
{
    Field field;

    REQUIRE(field.make_html_head() == R"(
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
)");

    REQUIRE(field.close_html_code() == R"(
</html>
    )");
}
