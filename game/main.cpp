#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow app(VideoMode(957, 600), "The Game!");

    Texture board, car;
    car.loadFromFile("car.png");
    board.loadFromFile("board.jpg");
    Sprite sBoard(board);
    Sprite sCar(car);

    sCar.setPosition(300, 300);

    int dx, dy;
    float angle = 0;

    while(app.isOpen()){
        Event e;
        while(app.pollEvent(e)){
            if(e.type == Event::Closed){
                app.close();
            }
            if(Keyboard::isKeyPressed(Keyboard::Right)){
                angle += 1;
            }
        }

        //Calculating:



    app.clear();
    app.draw(sBoard);
    app.draw(sCar);
    app.display();

    }


    return 0;
}
