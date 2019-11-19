#include <iostream>
#include <SFML/Graphics.hpp>
// #include "Map.hpp"
#include "Player.hpp"

using namespace std;

int main()
{
	sf::RenderWindow	window{sf::VideoMode(1024, 768), "Creative"};
	Camera						camera{};
	Player						player{RectangleShape(
									   sf::Vector2i{50, 50},
									   sf::Vector2i{50, 50},
									   sf::Color{200, 200, 200, 255})};

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        //     map.movePlayer(1, 0);
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        //     map.movePlayer(-1, 0);
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        //     map.movePlayer(0, 1);
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        //     map.movePlayer(0, -1);
        window.clear();
		player.drawBox(&window, camera);
        window.display();
    }
	return (0);
}