#pragma once
#include <SFML/Graphics.hpp>

namespace Ant2D {
	class GameObject {
	public:
		void AddRectangle(sf::Color Colour, float PositionX, float PositionYy);
		void RenderRectangle(sf::RenderWindow *window);
		void HideRectangle();

	};
	
	
		

	
}