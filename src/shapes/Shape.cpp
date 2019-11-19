#include "Shape.hpp"

Shape::Shape()
{
	m_color = sf::Color{0, 0, 0, 0};
}

const sf::Color	&Shape::getColor() const
{
	return (m_color);
}

Shape			&Shape::setColor(const sf::Color &color)
{
	m_color = color;
	return (*this);
}