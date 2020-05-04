#include <iostream>
#include <string>

#include "file.hpp"
#include "make_html.hpp"

int main(int argc, char* argv[])
{
    std::string file_name = "";
    file_name = argv[1];

    std::string board = make_filed();

    make_html(board);

    system("xdg-open chess_html.html");

    return 0;
}