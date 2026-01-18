// card.cpp
#include <iostream>
#include "card-value.h"
#include "card-value-tostring.h"
#include "card-color-tostring.h"
#include "card-color.h"
#include "card.h"

CardValue Card::getValue() { return value; }
CardColor Card::getColor() { return color; }
/*std::string Card::toString()
{
    std::string result;
    result += cardValueToString(value);
    result += " ";
    result += cardColorToString(color);
    return result;
}*/

// constructor
Card::Card(CardValue value, CardColor color) {
    this->value = value;
    this->color = color;
}
