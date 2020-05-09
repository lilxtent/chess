#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch2.hpp"

#include "../src/Converter.cpp"
#include "../src/Field.cpp"
#include "../src/File.cpp"

TEST_CASE("Letters converts to nums correctly", "[letter]")
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