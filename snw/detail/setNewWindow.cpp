#include <iostream>
#include <optional>
#include "../snw.h"
#include <SFML/Graphics.hpp>

namespace snw {
void setNewWindow() {

 sf::RenderWindow window(sf::VideoMode({200,200}),"Snake");

  sf::CircleShape triangle(80.f, 3);
  triangle.setFillColor(sf::Color::Blue);

  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear(sf::Color::Black);

    window.draw(triangle);

    window.display();
  }


}
}