#include <iostream>
#include <string>

#include "Field.hpp"
#include "file.hpp"
#include "make_html.hpp"

int main(int argc, char* argv[])
{
    std::string file_name = "";
    file_name = argv[1];

    make_html_game(file_name);

    system("xdg-open chess_html.html");

    return 0;
}