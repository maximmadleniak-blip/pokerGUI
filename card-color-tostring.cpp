// card-color-tostring.cpp

#include <iostream>

#include "card-color.h"
#include "card-color-tostring.h"

std::string cardColorToString(CardColor color) {
    
    switch(color) {
        case hearts: return "hearts"; break;
        case spades: return "spades"; break;
        case clubs: return "clubs"; break;
        case diamonds: return "diamonds"; break;
    }
    
    return "invalid color";
}

std::string cardColorToStringShort(CardColor color) {
    
    switch(color) {
        case hearts: return "H"; break;
        case spades: return "S"; break;
        case clubs: return "C"; break;
        case diamonds: return "D"; break;
    }
    
    return "-";
}
