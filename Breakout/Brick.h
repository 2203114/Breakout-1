#pragma once
#include <SFML/Graphics.hpp>

class Brick {
public:
    Brick(float x, float y, float width, float height, float health);
    void render(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

    float getHealth();
    void setHealth(float newH);


private:
    sf::RectangleShape _shape;
    bool _isDestroyed;
    float _health;
};