#ifndef MAP_HPP_
# define MAP_HPP_

# include <SFML/Graphics.hpp>
# include "Player.hpp"
# include "Camera.hpp"

class Map
{
private:
	sf::Rect<int>		m_rect;
	Camera				m_camera;
	Player				m_player;

public:
	Map(const sf::Rect<int> &rect,
		const Camera &camera,
		const Player &player);

	~Map() = default;

	// Map					&drawEntities() const;
	Map					&drawHitboxes(sf::RenderWindow *window);

	const sf::Rect<int>	&getRect() const;

	Map					&moveCamera(int dx, int dy);
	Map					&movePlayer(int dx, int dy);

	Map					&setCameraPosition(int x, int y);
	Map 				&setCameraZoom(float zoom);

	Map					&updateEntities();
};

#endif	//	MAP_HPP_