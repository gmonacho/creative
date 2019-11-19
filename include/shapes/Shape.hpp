#ifndef SHAPE_HPP_
# define SHAPE_HPP_

# include <SFML/Graphics.hpp>
# include "Camera.hpp"

class Shape
{
private:
	sf::Color		m_color;

public:
	Shape();
	virtual 		~Shape() {};
	virtual	Shape	&drawBox(sf::RenderWindow *window,
							 const Camera &camera) = 0;
	const sf::Color	&getColor() const;
	Shape			&setColor(const sf::Color &color);
};


#endif	//	SHAPE_HPP_