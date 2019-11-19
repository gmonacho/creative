#include "Player.hpp"

Player::Player()
{
	RectangleShape::setPosition(sf::Vector2i{0, 0});
	RectangleShape::setSize(sf::Vector2i{0, 0});
	RectangleShape::setColor(sf::Color{0, 0, 0, 0});
}

Player::Player(const RectangleShape &shape)
{
	RectangleShape::setPosition(shape.getPosition());
	RectangleShape::setSize(shape.getSize());
	RectangleShape::setColor(shape.getColor());
}