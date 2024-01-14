//System lib
#include <iostream>

//3rd party lib
#include <SFML/Graphics.hpp>

//Internal libs
#include "Person.h"

float speed = 5.f;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
    window.setFramerateLimit(60);
    sf::RectangleShape shape(sf::Vector2f(10.f, 10.f));
    shape.setFillColor(sf::Color::Green);
            sf::Keyboard::setVirtualKeyboardVisible(true);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            std::cerr << event.key.code << std::endl;
            shape.move(0.f, -speed);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            std::cerr << event.key.code << std::endl;
            shape.move(0.f, speed);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            std::cerr << event.key.code << std::endl;
            shape.move(-speed, 0.f);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            std::cerr << event.key.code << std::endl;
            shape.move(speed, 0.f);
        }

        if(shape.getPosition().x <= 0 )
        {
            shape.move(speed, 0.f);
        }

        if(shape.getPosition().x + shape.getSize().x*2 >= window.getSize().x)
        {
            shape.move(-speed, 0.f);
        }
        if(shape.getPosition().y <= 0 )
        {
            shape.move(0.f, speed);
        }

        if(shape.getPosition().y + shape.getSize().x*2 >= window.getSize().y)
        {
            shape.move(0.f, -speed);
        }
        

        // Setting background color of window
        window.clear(sf::Color(100,10, 15, 0));

        // Drawing our shape
        window.draw(shape);

        // Displaying all the objects
        window.display();
    }

    return 0;
}