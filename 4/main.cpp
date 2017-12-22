#include <SFML/Graphics.hpp> 
#include <cmath> 
#include <iostream>








// опрашивает и обрабатывает доступные события в цикле


// Обновляет фигуру , указывающую на мышь



// Рисует и выводит 1 кадр


// Рисует в окне стрелку , которая поворачивает вслед за курсором


int main() 
{  
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({ 800, 600}), "cat", sf::Style::Default, settings);

    sf::Texture texture;
    texture.loadFromFile("images/cat.png");
    
      sf::Sprite sprite;
      sprite.setTexture(texture);  
      sprite.setPosition(400, 300);

      while (window.isOpen())
      {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color(255, 255, 255));
        window.draw(sprite);
        window.display();
      }
        

  


    
    



    

}

