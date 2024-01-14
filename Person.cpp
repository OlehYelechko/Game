#include "Person.h"

Person::Person(/* args */): speed(5.f), size(20.f), personColor(sf::Color::Magenta)
{
}

Person::~Person()
{
}

float Person::getSpeed()
{
    return this->speed;
}

void Person::setSpeed(float speed)
{
    this->speed = speed;
}