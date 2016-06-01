#include "SFML\Graphics.hpp"
#include <iostream>



int main()
{


	

	sf::RenderWindow window(sf::VideoMode(600,600),"SFML WORKS!");

	//declare texture
	sf::Texture texture;

	//load image
	texture.loadFromFile("sprite2.png");


	sf::Sprite sprite(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 50, 50));
	

	
	//////// MAIN GAME LOOP ///////////
	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
					window.close();

					break;

	
			}
		}


		//rendering
		window.clear();

		//drawing
		window.draw(sprite);

		window.display();
	}
}