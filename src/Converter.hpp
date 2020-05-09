#pragma once

class Converter {
private:
public:
    Converter()
    {
    }

    void letters_to_nums(char& letter)
    {
        switch (letter) {
        case 'a':
            letter = '1';
            break;

        case 'b':
            letter = '2';
            break;

        case 'c':
            letter = '3';
            break;

        case 'd':
            letter = '4';
            break;

        case 'e':
            letter = '5';
            break;

        case 'f':
            letter = '6';
            break;

        case 'g':
            letter = '7';
            break;

        case 'h':
            letter = '8';
            break;

        default:
            break;
        }
    }
};