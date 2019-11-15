#include "Camera.hpp"

Camera::Camera(int x, int y, sf::Vector2<int> defaultResolution)
{
	m_rect.left = x;
	m_rect.top = y;
	m_rect.width = defaultResolution.x;
	m_rect.height = defaultResolution.y;
	m_zoom = 1;
}

const int	&Camera::getX() const
{
	return (m_rect.left);
}

const int	&Camera::getY() const
{
	return (m_rect.top);
}

const int	&Camera::getW() const
{
	return (m_rect.width);
}

const int	&Camera::getH() const
{
	return (m_rect.height);
}

int			Camera::getLeft() const
{ 
	return (m_rect.left - m_rect.width / 2);
}

int			Camera::getRight() const
{
	return (m_rect.left + m_rect.width / 2);
}

int			Camera::getTop() const
{
	return (m_rect.top + m_rect.height / 2);
}

int			Camera::getBot() const
{
	return (m_rect.top - m_rect.height / 2);
}

const float	&Camera::getZoom() const
{
	return (m_zoom);
}


Camera		&Camera::move(const sf::Vector2<int> &v)
{
	m_rect.left += v.x;
	m_rect.top += v.y;
	return (*this);
}

Camera		&Camera::move(int dx, int dy)
{
	Camera::move(sf::Vector2<int>{dx, dy});
	return (*this);
}


Camera		&Camera::setPosition(int x,  int y)
{
	m_rect.left = x;
	m_rect.top = y;
	return (*this);
}

Camera		&Camera::setZoom(float zoom)
{
	m_zoom = zoom;
	return (*this);
}


Camera		&Camera::update(const sf::Vector2<int> &mapSize)
{
	m_rect.width = mapSize.x * m_zoom;
	m_rect.height = mapSize.y * m_zoom;
	return (*this);
}