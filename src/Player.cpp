#include "Player.hpp"

Player::Player(const sf::Vector2<int> &position, const sf::Vector2<int> &hitboxSize)
{
	m_position = position;
	m_hitbox.left = position.x;
	m_hitbox.top = position.y;
	m_hitbox.width = hitboxSize.x;
	m_hitbox.height = hitboxSize.y;
	m_hitboxColor = sf::Color{255, 255, 255};
}

const Player	&Player::drawHitbox(sf::RenderWindow *window,
							const Camera &camera) const
{
	sf::RectangleShape	hitboxShape;

	hitboxShape.setPosition(sf::Vector2f(Player::getHitboxLeft()
										 - camera.getLeft(),
										 Player::getHitboxTop()
										 - camera.getBot()));
	hitboxShape.setSize(sf::Vector2f(m_hitbox.width,
									 m_hitbox.height));
	hitboxShape.setOutlineThickness(1.f);
	hitboxShape.setFillColor(sf::Color{0, 0, 0, 0});
	hitboxShape.setOutlineColor(m_hitboxColor);
	window->draw(hitboxShape);
	return (*this);
}

const int	&Player::getX() const
{
	return (m_position.x);
}

const int			&Player::getY() const
{
	return (m_position.y);
}

int					Player::getHitboxLeft() const
{
	return (m_hitbox.left - m_hitbox.width / 2);
}

int					Player::getHitboxRight() const
{
	return (m_hitbox.left + m_hitbox.width / 2);
}

int					Player::getHitboxTop() const
{
	return (m_hitbox.top - m_hitbox.height / 2);
}

int					Player::getHitboxBot() const
{
	return (m_hitbox.top + m_hitbox.height / 2);
}

sf::Vector2<int>	Player::getHitboxPosition() const
{
	return (sf::Vector2<int>{m_hitbox.left, m_hitbox.top});
}

sf::Vector2<int>	Player::getHitboxSize() const
{
	return (sf::Vector2<int>{m_hitbox.width, m_hitbox.height});
}

Player	&Player::setHitboxBorderColor(const sf::Color &color)
{
	m_hitboxColor = color;
	return (*this);
}

Player	&Player::move(const sf::Vector2<int> &v)
{
	m_position += v;
	m_hitbox.left += v.x;
	m_hitbox.top += v.y;
	return (*this);
}

Player	&Player::move(int dx, int dy)
{
	Player::move(sf::Vector2<int>{dx, dy});
	return (*this);
}

Player	&Player::setPosition(sf::Vector2<int> position)
{
	m_position = position;
	return (*this);
}

Player	&Player::setPosition(int x, int y)
{
	m_position.x = x;
	m_position.y = y;
	return (*this);
}