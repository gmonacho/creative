#include "CenteredShape.hpp"

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

CenteredShape	&CenteredShape::drawBox(sf::RenderWindow *window,
										const Camera &camera)
{
	sf::CircleShape	circle{1};

	circle.setOutlineThickness(1);
	circle.setFillColor(sf::Color{0, 0, 0, 0});
	circle.setOutlineColor(Shape::getColor());
	circle.setPosition(static_cast<sf::Vector2f>(m_position));
	window->draw(circle);
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


