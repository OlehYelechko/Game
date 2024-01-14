#include <SFML/Graphics.hpp>

class Person
{
private:
    float speed;
    float size = 20.f;
    sf::Color personColor;
public:
    Person();
    ~Person();
    
    float getSpeed();
    void setSpeed(float speed);
};
