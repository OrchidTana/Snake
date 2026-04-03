#include <iostream>
#include <optional>
#include "domain/snake/setnewwindow/SetNewWindow.h"
#include <SFML/Graphics.hpp>

namespace snw {

constexpr unsigned int MAX_X = 800;
constexpr unsigned int MAX_Y = 400;

void setNewWindow() {
  float tangle_radius = 15;
  sf::RenderWindow window(sf::VideoMode({MAX_X,MAX_Y}),"Snake");

  sf::CircleShape circle(tangle_radius);
  circle.setFillColor(sf::Color::Green);
  circle.setPosition({MAX_X / 2 - tangle_radius,MAX_Y / 2 - tangle_radius});

  float speed = 200.f;
  sf::Clock clock;

  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    float deltaTime = clock.restart().asSeconds();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
      circle.move({0, -speed * deltaTime});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
      circle.move({0, +speed * deltaTime});
      }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
      circle.move({-speed * deltaTime,0 });
      }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D) ||
      sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
      circle.move({+speed * deltaTime,0 });
      }

    float radius = circle.getRadius();
    bool collision = false;
    sf::Vector2f newPos = circle.getPosition();
    if (newPos.x - radius < 0 - tangle_radius || newPos.x + radius > MAX_X - tangle_radius
      ||
      newPos.y -
      radius
      < 0 - tangle_radius || newPos.y + radius > MAX_Y - tangle_radius) {
      window.close();
    }

    window.clear(sf::Color::Black);

    window.draw(circle);

    window.display();
  }


}
}