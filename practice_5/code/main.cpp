#include <SFML/Graphics.hpp>
#include <cmath>
#include <functional>
#include "ResourcePath.hpp"

using namespace std;

void drawGraph(sf::RenderWindow& window, std::function<float(float)> func, float xMin, float xMax, float scaleX, float scaleY, sf::Color color){
    sf::VertexArray graph(sf::LinesStrip);
    
    for (float x = xMin; x <= xMax; x += 0.1f) {
        float y = func(x);

        float screenX = 400 + x * scaleX;
        float screenY = 300 - y * scaleY;

        graph.append(sf::Vertex(sf::Vector2f(screenX, screenY), color));
    }

    window.draw(graph);
}

int main(){
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "grapher's successor");
    
    sf::CircleShape userPoint(5);
    userPoint.setFillColor(sf::Color::Red);
    bool userPointExists = false;
    
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "tuffy.ttf")){
        return -1;
    }
    
    sf::Text coordinatesText;
    coordinatesText.setFont(font);
    coordinatesText.setCharacterSize(20);
    coordinatesText.setFillColor(sf::Color::White);
    coordinatesText.setPosition(10, 10);
    
    sf::VertexArray xAxis(sf::Lines, 2);
    xAxis[0].position = sf::Vector2f(50, 300);
    xAxis[0].color = sf::Color::White;
    xAxis[1].position = sf::Vector2f(750, 300);
    xAxis[1].color = sf::Color::White;

    sf::VertexArray yAxis(sf::Lines, 2);
    yAxis[0].position = sf::Vector2f(400, 50);
    yAxis[0].color = sf::Color::White;
    yAxis[1].position = sf::Vector2f(400, 550);
    yAxis[1].color = sf::Color::White;
    

    while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();

        if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);

                float mathX = (mousePos.x - 400) / 30.0f;
                float mathY = -(mousePos.y - 300) / 100.0f;

                
                userPoint.setPosition(mousePos.x - userPoint.getRadius(), mousePos.y - userPoint.getRadius());
                userPointExists = true;
                
                string zone;
                if (mathX > 0){
                    if (mathY > 0.1*mathX*mathX-5){
                        zone = "1";
                    }
                    else {
                        zone = "4";
                    }
                    }
                else if (mathX < 0){
                    if (mathY > 0.1*mathX*mathX-5){
                        zone = "3";
                    }
                    else {
                        zone = "2";
                    }
                    }
                else {
                    
                        zone = "Border";
                    
                }
                coordinatesText.setString("Coordinates: (" + std::to_string(mathX) + ", " + std::to_string(mathY) + ");\n" + "Zone: ("+zone+").");
            }
        }
    }
        window.clear();
        
        window.draw(xAxis);
        window.draw(yAxis);
        
        drawGraph(window, [](float x) { return x/0.0000000000001; }, -10, 10, 30, 100, sf::Color::Blue);

            // 5 _   Отрисовка графика y2 = x * x - 5 (Замените на ваш график)
        drawGraph(window, [](float x) { return 0.1*x*x-5; }, -10, 10, 30, 10, sf::Color::Red);

            
        if (userPointExists) {
            window.draw(userPoint);
            window.draw(coordinatesText);
            }

            
            window.display();
        }
    
    return 0;
}
