
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(500, 500), "off the grid");
    
    const int cellSize = 50;
    const int gridSize = 10;
    
    sf::RectangleShape cells[gridSize][gridSize];
    
    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < gridSize; j++)
        {
            cells[i][j].setSize(sf::Vector2f(cellSize-2, cellSize-2));
            cells[i][j].setPosition(i*cellSize, j*cellSize);
            cells[i][j].setFillColor(sf::Color::White);
            cells[i][j].setOutlineColor(sf::Color::Black);
            cells[i][j].setOutlineThickness(1);
            
        }
    }
    
    /*
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i+j == gridSize-1) {
                cells[i][j].setFillColor(sf::Color::Green);
            }
        }
    }
    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i+j == gridSize-3) {
                cells[i][j].setFillColor(sf::Color::Green);
            }
        }
    }
    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i+j == gridSize-5) {
                cells[i][j].setFillColor(sf::Color::Green);
            }
        }
    }
    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i+j == gridSize-7) {
                cells[i][j].setFillColor(sf::Color::Green);
            }
        }
    }
    
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            if (i+j == gridSize-9) {
                cells[i][j].setFillColor(sf::Color::Green);
            }
        }
    }*/
    
    /* ИЛИ */
    
    /*              ЗДЕСЬ ↓ */
    
    for (int nn = 1; nn<=9; nn+=2)
    {
        for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridSize; j++) {
                if (i+j == gridSize-nn) {
                    cells[i][j].setFillColor(sf::Color::Green);
                }
            }
        }
    }
    
    /*              ЗДЕСЬ ↑ */
    
    
    /*for(int i = 0; i < gridSize; i+=2)
    {
        for(int j = 0; j < gridSize; j+=2)
        {
            cells[i][j].setSize(sf::Vector2f(cellSize-2, cellSize-2));
            cells[i][j].setPosition(i*cellSize, j*cellSize);
            cells[i][j].setFillColor(sf::Color::Green);
            cells[i][j].setOutlineColor(sf::Color::White);
            cells[i][j].setOutlineThickness(1);
        }
    }
    
    for(int i = 1; i < gridSize; i+=2)
    {
        for(int j = 1; j < gridSize; j+=2)
        {
            cells[i][j].setSize(sf::Vector2f(cellSize-2, cellSize-2));
            cells[i][j].setPosition(i*cellSize, j*cellSize);
            cells[i][j].setFillColor(sf::Color::Green);
            cells[i][j].setOutlineColor(sf::Color::White);
            cells[i][j].setOutlineThickness(1);
        }
    }*/

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            }


        // Clear screen
        window.clear(sf::Color::White);

    for(int i=0; i<gridSize; i++)
        {
            for(int j=0; j<gridSize; j++)
            {
                window.draw(cells[i][j]);
            }
        }
        // Update the window
        window.display();
    }

    return 0;
}
