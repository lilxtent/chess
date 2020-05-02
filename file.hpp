#pragma once

#include <fstream>

void make_html (std::string format_html, std::string path = "chess_html.html"){
    std::ofstream file;
    file.open(path, std::ios::out | std::ios::app);

    if (!file.is_open()){
        std::cout << "No such file" << std::endl;
        return;
    }

    file << format_html;

    file.close();

}