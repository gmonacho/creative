#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.hpp"
#include "event.hpp"
#include "Player.hpp"

using namespace std;

int main()
{
	sf::RenderWindow 	window{sf::VideoMode(1024, 768), "Creative", sf::Style::Titlebar | sf::Style::Close};
	Map					map{sf::IntRect{0, 0, 10000, 4000},
							Camera{},
							Player{RectangleShape(
								sf::Vector2i{50, 600},
								sf::Vector2i{50, 50},
								sf::Color{200, 200, 200, 255})}};

	while (window.isOpen())
	{
		event(&window, &map);
		window.clear();
		map.drawHitboxes(&window);
		map.updateEntities();
		window.display();
	}
	return (0);
}