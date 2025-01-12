#include "GameObject.hpp"

#include <SFML/Graphics.hpp>


sf::RectangleShape rectangle(sf::Vector2f(200.f, 150.f));


void Ant2D::GameObject::AddRectangle(sf::Color Colour, float PositionX, float PositionY)
{
   
   
    rectangle.setFillColor(Colour);
    rectangle.setPosition(PositionX,PositionY);
}

void Ant2D::GameObject::RenderRectangle(sf::RenderWindow *window)
{
    window->draw(rectangle);
}
