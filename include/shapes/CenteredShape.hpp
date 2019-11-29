#ifndef CENTERED_SHAPE_HPP_
# define CENTERED_SHAPE_HPP_

# include <SFML/Graphics.hpp>
# include "Shape.hpp"

class CenteredShape : public Shape
{
private:
	sf::Vector2i	m_position;

public:
	CenteredShape();
	CenteredShape(int x, int y,
				  const sf::Color &color = sf::Color{0, 0, 0, 0});
	CenteredShape(const sf::Vector2i &position, const sf::Color &color);
	virtual ~CenteredShape() {};

	CenteredShape			&addToPosition(int dx, int dy);
	CenteredShape			&addToPosition(const sf::Vector2i &v);

	bool					collideRect(const RectangleShape &rect) = 0;

	CenteredShape			&drawBox(sf::RenderWindow *window,
							 		 const Camera &camera) = 0;

	const sf::Vector2i		&getPosition() const;
	
	CenteredShape			&move(int dx,  int dy) override;
	CenteredShape			&move(const sf::Vector2i &v) override;

	CenteredShape			&setPosition(const sf::Vector2i &position);

	CenteredShape			&setX(int x);
	CenteredShape			&setY(int y);

	CenteredShape			&update() = 0;

};


#endif	//	CENTERED_SHAPE_HPP_