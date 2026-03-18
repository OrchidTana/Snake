//
// Created by Laplace on 2026/3/18.
//
#include <iostream>
#include "../opnwd.h"
#include <SFML/Graphics.hpp>

namespace opnwd {
void changeNewWindow() {
  sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }
}
}

