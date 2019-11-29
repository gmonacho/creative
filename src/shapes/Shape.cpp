#include "Shape.hpp"

Shape::Shape()
{
	m_color = sf::Color{0, 0, 0, 0};
}

const sf::Color	&Shape::getColor() const
{
	return (m_color);
}


const sf::Vector2i	&Shape::getVelocity() const
{
	return (m_velocity);
}

Shape			&Shape::setColor(const sf::Color &color)
{
	m_color = color;
	return (*this);
}

Shape			&Shape::setVelocity(const sf::Vector2i &velocity)
{
	m_velocity = velocity;
	return (*this);
}

Shape			&Shape::setXVelocity(int vx)
{
	m_velocity.x = vx;
	return (*this);
}

Shape			&Shape::setYVelocity(int vy)
{
	m_velocity.y = vy;
	return (*this);
}

Shape			&Shape::move(int dx,  int dy)
{
	m_velocity.x += dx;
	m_velocity.y += dy;
	return (*this);
}

Shape			&Shape::move(const sf::Vector2i &v)
{
	m_velocity += v;
	return (*this);
}