#include "CenteredShape.hpp"
#include "RectangleShape.hpp"

CenteredShape::CenteredShape()
{
	m_position = sf::Vector2i{0, 0};
	Shape::setColor(sf::Color{0, 0, 0, 0}); 
}

CenteredShape::CenteredShape(int x, int y, const sf::Color &color)
{
	m_position = sf::Vector2i{x, y};
	Shape::setColor(color);
}

CenteredShape::CenteredShape(const sf::Vector2i &position, const sf::Color &color)
{
	m_position = position;
	Shape::setColor(color);
}

CenteredShape			&CenteredShape::move(int dx,  int dy)
{
	Shape::setVelocity(sf::Vector2i{dx, dy});
	return (*this);
}

CenteredShape			&CenteredShape::move(const sf::Vector2i &v)
{
	Shape::setVelocity(v);
	return (*this);
}

CenteredShape			&CenteredShape::addToPosition(int dx, int dy)
{
	m_position.x += dx;
	m_position.y += dy;
	return (*this);
}

CenteredShape			&CenteredShape::addToPosition(const sf::Vector2i &v)
{
	m_position += v;
	return (*this);
}

const sf::Vector2i	&CenteredShape::getPosition() const
{
	return (m_position);
}

CenteredShape	&CenteredShape::setPosition(const sf::Vector2i &position)
{
	m_position = position;
	return (*this);
}

CenteredShape	&CenteredShape::setX(int x)
{
	m_position.x = x;
	return (*this);
}

CenteredShape	&CenteredShape::setY(int y)
{
	m_position.y = y;
	return (*this);
}


