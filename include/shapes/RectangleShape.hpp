#ifndef	RectangleShape_HPP_
# define RectangleShape_HPP_

# include "CenteredShape.hpp"
# include "SFML/Graphics.hpp"

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
	
	bool				collideRect(const RectangleShape &rect);

	RectangleShape		&drawBox(sf::RenderWindow *window,
							 	 const Camera &camera) override;

	const sf::Vector2i	&getSize() const;
	int					getLeft() const;
	int					getRight() const;
	int					getTop() const;
	int					getBot() const;
	sf::Rect<int>		getSFMLRect() const;
	
	RectangleShape		&setSize(const sf::Vector2i &size);
	RectangleShape		&setW(int w);
	RectangleShape		&setH(int h);

	RectangleShape		&update() override;
};



#endif	//	RectangleShape_HPP_