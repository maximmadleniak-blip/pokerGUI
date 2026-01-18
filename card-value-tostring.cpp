// card-value-tostring.cpp

#include <iostream>

#include "card-value.h"
#include "card-value-tostring.h"

std::string cardValueToString(CardValue value) {
    
    switch(value) {
        case two: return "two"; break;
        case three: return "three"; break;
        case four: return "four"; break;
        case five: return "five"; break;
        case six: return "six"; break;
        case seven: return "seven"; break;
        case eight: return "eight"; break;
        case nine: return "nine"; break;
        case ten: return "ten"; break;
        case jack: return "jack"; break;
        case queen: return "queen"; break;
        case king: return "king"; break;
        case ace: return "ace"; break;
    }
    
    return "invalid value";
}

std::string cardValueToStringShort(CardValue value) {
    
    switch(value) {
        case two: return "2"; break;
        case three: return "3"; break;
        case four: return "4"; break;
        case five: return "5"; break;
        case six: return "6"; break;
        case seven: return "7"; break;
        case eight: return "8"; break;
        case nine: return "9"; break;
        case ten: return "X"; break;
        case jack: return "J"; break;
        case queen: return "Q"; break;
        case king: return "K"; break;
        case ace: return "A"; break;
    }
    
    return "-";
}
