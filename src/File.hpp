#pragma once

#include <fstream>
#include <iostream>
#include <string>

class File {
private:
public:
    File();

    void
    add_to_html(std::string format_html, std::string path = "chess_html.html");
    void to_html(std::string file_name);
};