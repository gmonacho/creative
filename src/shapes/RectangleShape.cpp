#include "RectangleShape.hpp"

RectangleShape::RectangleShape()
{
	RectangleShape::setX(0);
	RectangleShape::setY(0);
	RectangleShape::setColor(sf::Color{0, 0, 0, 0});
}

RectangleShape::RectangleShape(const sf::Vector2i &position,
			  		 const sf::Vector2i &size,
			  		 const sf::Color &color)
{
	RectangleShape::setPosition(position);
	m_size = size;
	RectangleShape::setColor(color);
}

RectangleShape	&RectangleShape::drawBox(sf::RenderWindow *window,
					 const Camera &camera)
{
	sf::RectangleShape	rect{static_cast<sf::Vector2f>(m_size)};

	rect.setOutlineThickness(1);
	rect.setFillColor(sf::Color{0, 0, 0, 0});
	rect.setOutlineColor(RectangleShape::getColor());
	window->draw(rect);
	return (*this);
}

const sf::Vector2i	&RectangleShape::getSize() const
{
	return (m_size);
}

RectangleShape			&RectangleShape::setSize(const sf::Vector2i &size)
{
	m_size = size;
	return (*this);
}

RectangleShape			&RectangleShape::setW(int w)
{
	m_size.x = w;
	return (*this);
}

RectangleShape			&RectangleShape::setH(int h)
{
	m_size.y = h;
	return (*this);
}