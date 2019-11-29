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

	rect.setPosition(static_cast<sf::Vector2f>(CenteredShape::getPosition()));
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

bool	RectangleShape::collideRect(const RectangleShape &rect)
{
	return (rect.getSFMLRect().intersects(rect.getSFMLRect()));
}

int	RectangleShape::getLeft() const
{
	return (CenteredShape::getPosition().x - RectangleShape::getSize().x / 2);
}

int	RectangleShape::getRight() const
{
	return (CenteredShape::getPosition().x + RectangleShape::getSize().x / 2);
}

int	RectangleShape::getTop() const
{
	return (CenteredShape::getPosition().y - RectangleShape::getSize().y / 2);
}

int	RectangleShape::getBot() const
{
	return (CenteredShape::getPosition().y + RectangleShape::getSize().y / 2);
}

sf::Rect<int>	RectangleShape::getSFMLRect() const
{
	return (sf::Rect{getLeft(), getTop(), getSize().x, getSize().y});
}

RectangleShape		&RectangleShape::setSize(const sf::Vector2i &size)
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

RectangleShape			&RectangleShape::update()
{
	CenteredShape::addToPosition(Shape::getVelocity());
	Shape::setVelocity(sf::Vector2i{0, 0});
	return (*this);
}