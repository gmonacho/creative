#ifndef PLAYER_HPP_
# define PLAYER_HPP_

#include <SFML/Graphics.hpp>
#include "Camera.hpp"

class Player
{
private:
	sf::Vector2<int>	m_position;
	sf::Rect<int>		m_hitbox;
	sf::Color			m_hitboxColor;

public:
	Player(const sf::Vector2<int> &position = sf::Vector2<int>{0, 0},
		   const sf::Vector2<int> &hitboxSize = sf::Vector2<int>{0, 0});

	~Player() = default;
	
	const Player		&drawHitbox(sf::RenderWindow *window,
									const Camera &camera) const;
	
	const int			&getX() const;
	const int			&getY() const;
	int					getHitboxLeft() const;
	int					getHitboxRight() const;
	int					getHitboxTop() const;
	int					getHitboxBot() const;
	sf::Vector2<int>	getHitboxPosition() const;
	sf::Vector2<int>	getHitboxSize() const;


	Player				&move(const sf::Vector2<int> &v);
	Player				&move(int dx, int dy);

	Player				&setHitboxBorderColor(const sf::Color &color);
	Player				&setPosition(sf::Vector2<int> position);
	Player				&setPosition(int x, int y);
};

#endif	//	PLAYER_HPP_