#include "event.hpp"

static void	player_event(sf::RenderWindow *window, Map *map)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	    map->movePlayer(1, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	    map->movePlayer(-1, 0);
}

void		event(sf::RenderWindow *window, Map *map)
{
	sf::Event event;

	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();
	}
	player_event(window, map);
}