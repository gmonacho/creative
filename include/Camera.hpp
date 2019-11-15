#ifndef CAMERA_HPP_
# define CAMERA_HPP_

#include <SFML/Graphics.hpp>

class Camera
{
private:
	sf::Rect<int>	m_rect;
	float			m_zoom;
public:
	Camera(int x = 0, int y = 0, sf::Vector2<int> defaultResolution = sf::Vector2<int>{1024, 768});

	const int	&getX() const;
	const int	&getY() const;
	const int	&getW() const;
	const int	&getH() const;
	int			getLeft() const;
	int			getRight() const;
	int			getTop() const;
	int			getBot() const;
	const float	&getZoom() const;

	Camera		&move(const sf::Vector2<int> &v);
	Camera		&move(int dx, int dy);

	Camera		&setPosition(int x,  int y);
	Camera		&setZoom(float zoom);

protected:
	Camera		&update(const sf::Vector2<int> &mapSize);
	
};

#endif	// CAMERA_H_	