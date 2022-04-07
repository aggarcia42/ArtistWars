#include "./Source/Grid.hpp"
#include "./Source/Screen.hpp"
#include <stdlib.h>

int main()
{
    /*int horizontal;
    int vertical;
    std::cout << "Please writte the vertical size of your grid:" << std::endl;
    scanf("%d", &vertical);
    std::cout << "Please writte the horizontal size of your grid:" << std::endl;
    scanf("%d", &horizontal);*/
    
    Screen screen;
    position pixelChange;

    pixelChange.x = 400;
    pixelChange.y = 300;
    position currentPosition;

    uint8_t R = 255;
    uint8_t G = 255;
    uint8_t B = 255;
    if(screen.init() == false)
    {
        std::cout << "Error initialising SDL." << std::endl;
    }
    for(int y = 0; y < Screen::SCREEN_HEIGHT; y++)
    {
        for(int x = 0; x < Screen::SCREEN_WIDTH; x++)
        {
            currentPosition.y = y;
            currentPosition.x = x;
            screen.setPixel(currentPosition, R, G, B);
        }
    }
    screen.update();
    while (true)
    {
        currentPosition.x = rand() % 1980;
        currentPosition.y = rand() % 1080;
        R = rand() % 255;
        G = rand() % 255;
        B = rand() % 255;
        screen.setPixel(currentPosition, R, G, B);
        screen.update();
        if(screen.processEvents() == false)
        {
            break;
        }
    }
    screen.close();
    return 0;
}
