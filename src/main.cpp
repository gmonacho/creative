#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.hpp"
#include "Player.hpp"

using namespace std;

int main()
{
	sf::RenderWindow	window{sf::VideoMode(1024, 768), "Creative"};
    Map                 map{sf::Rect<int>{0, 0, 3000, 1000},
                            Camera{0,
                                   0,
                                   sf::Vector2<int>{1024, 768}},
                            Player{sf::Vector2<int>{0, 0},
                                  sf::Vector2<int>{30, 50}}};

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            map.movePlayer(1, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            map.movePlayer(-1, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            map.movePlayer(0, 1);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            map.movePlayer(0, -1);
        window.clear();
        map.drawHitboxes(&window);
        window.display();
    }
	return (0);
}