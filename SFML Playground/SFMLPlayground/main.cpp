#include <iostream>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    unsigned int windowSizeX = 800, windowSizeY = 600; //, bitsPerPixel = 32;
    char windowTitle[30];
    sprintf(windowTitle,"Window Size: %d x %d ",windowSizeX,windowSizeY);

    sf::Window window(sf::VideoMode(windowSizeX, windowSizeY),windowTitle);
    sf::Event event;


    // Loop to close window if escape key is pressed or window is closed; change size of window if 'W' or 'S' is pressed
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape) || (event.type == sf::Event::Closed))
            {
                    window.close();
            }
            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::W))
            {
                windowSizeX += 10;
                windowSizeY += 10;
                window.create(sf::VideoMode(windowSizeX, windowSizeY),"Bigger Window");
            }
            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::S))
            {
                windowSizeX -= 10;
                windowSizeY -= 10;
                window.create(sf::VideoMode(windowSizeX, windowSizeY),"Smaller Window");
            }
        }
    }

    return 0;
}
