#include <iostream>
#include <string>

#include "Converter.hpp"
#include "Field.hpp"
#include "File.hpp"

int main(int argc, char* argv[])
{
    File game_rec;
    game_rec.to_html(argv[1]);
    return 0;
}