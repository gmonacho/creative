#ifndef	RectangleShape_HPP_
# define RectangleShape_HPP_

# include "CenteredShape.hpp"

class RectangleShape : public CenteredShape
{
private:
	sf::Vector2i	m_size;

public:
	RectangleShape();
	RectangleShape(const sf::Vector2i &position,
			  const sf::Vector2i &size,
			  const sf::Color &color = sf::Color{0, 0, 0, 0});
	~RectangleShape() override {};
	
	RectangleShape		&drawBox(sf::RenderWindow *window,
							 	 const Camera &camera) override;

	const sf::Vector2i	&getSize() const;
	
	RectangleShape		&setSize(const sf::Vector2i &size);
	RectangleShape		&setW(int w);
	RectangleShape		&setH(int h);
};



#endif	//	RectangleShape_HPP_