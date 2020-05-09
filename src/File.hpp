#pragma once

#include <fstream>
#include <iostream>
#include <string>

class File {
private:
public:
    File();

    void
    make_html(std::string format_html, std::string path = "chess_html.html");
    void make_html_game(std::string file_name);
};