#include "Map.hpp"

Map::Map(const sf::Rect<int> &rect,
		 const Camera &camera,
		 const Player &player)
{
	m_rect = rect;
	m_camera = camera;
	m_player = player;
}

// Map		&Map::drawEntities() const
// {

// 	return (*this);
// }


const Map	&Map::drawHitboxes(sf::RenderWindow *window) const
{
	m_player.drawHitbox(window, m_camera);
	return (*this);
}

const sf::Rect<int>	&Map::getRect() const
{
	return (m_rect);
}

Map		&Map::moveCamera(int dx, int dy)
{
	m_camera.move(dx, dy);
	return (*this);
}

Map		&Map::movePlayer(int dx, int dy)
{
	m_player.move(dx, dy);
	return (*this);
}

Map		&Map::setCameraPosition(int x, int y)
{
	m_camera.setPosition(x, y);
	return (*this);
}

Map 	&Map::setCameraZoom(float zoom)
{
	m_camera.setZoom(zoom);
	return (*this);
}