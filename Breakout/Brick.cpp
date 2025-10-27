#include "Brick.h"

Brick::Brick(float x, float y, float width, float height, float health)
    : _isDestroyed(false)
{
    _shape.setPosition(x, y);
    _shape.setSize(sf::Vector2f(width, height));
   

    _health = health;

    if(_health==1)
        _shape.setFillColor(sf::Color::Green);
    else if(_health==2)
        _shape.setFillColor(sf::Color::Yellow);
    else if (_health==3)
        _shape.setFillColor(sf::Color::Red);
    else if (_health==4)
        _shape.setFillColor(sf::Color::Magenta);
    else if (_health==5)
        _shape.setFillColor(sf::Color::Blue);
}

void Brick::render(sf::RenderWindow& window)
{
    if (!_isDestroyed) {
        window.draw(_shape);
    }
}

sf::FloatRect Brick::getBounds() const
{
    return _shape.getGlobalBounds();
}

float Brick::getHealth()
{
    return _health;
}

void Brick::setHealth(float newH)
{
    _health = newH;
}
