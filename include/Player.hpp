#ifndef PLAYER_HPP_
# define PLAYER_HPP_

# include <SFML/Graphics.hpp>
# include "RectangleShape.hpp"

class Player : public RectangleShape
{
public:
	Player();
	Player(const RectangleShape &shape);
	~Player() override {};
};

#endif	//	PLAYER_HPP_