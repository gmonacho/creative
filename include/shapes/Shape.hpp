#ifndef SHAPE_HPP_
# define SHAPE_HPP_

# include <SFML/Graphics.hpp>
# include "Camera.hpp"

class RectangleShape;

class Shape
{
private:
	sf::Color		m_color;
	sf::Vector2i	m_velocity;

public:
	Shape();
	virtual 			~Shape() {};
	virtual bool		collideRect(const RectangleShape &rect) = 0;
	virtual	Shape		&drawBox(sf::RenderWindow *window,
								const Camera &camera) = 0;
	const sf::Color		&getColor() const;
	const sf::Vector2i	&getVelocity() const;

	Shape				&setColor(const sf::Color &color);
	Shape				&setVelocity(const sf::Vector2i &velocity);
	Shape				&setXVelocity(int vx);
	Shape				&setYVelocity(int vy);

	virtual Shape		&move(int dx,  int dy);
	virtual Shape		&move(const sf::Vector2i &v);

	virtual Shape		&update() = 0;
};


#endif	//	SHAPE_HPP_