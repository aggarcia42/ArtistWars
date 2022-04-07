#include "./Source/Grid.hpp"
#include "./Source/Screen.hpp"

int main()
{
/*    int horizontal;
    int vertical;
    std::cout << "Please writte the vertical size of your grid:" << std::endl;
    scanf("%d", &vertical);
    std::cout << "Please writte the horizontal size of your grid:" << std::endl;
    scanf("%d", &horizontal);

    Grid serverGrid(horizontal, vertical);
    serverGrid.printGrid();
    position modifyPosition;
    std::cout << "Please writte the vertical size of your grid you want to change:" << std::endl;
    scanf("%d", &modifyPosition.y);
    std::cout << "Please writte the horizontal size of your grid you want to change:" << std::endl;
    scanf("%d", &modifyPosition.x);
    serverGrid.setNewColor(modifyPosition, BLUE);
    serverGrid.printGrid();*/
    Screen screen;

    if(screen.init() == false)
    {
        std::cout << "Error initialising SDL." << std::endl;
    }

    while (true)
    {
        if(screen.processEvents() == false)
        {
            break;
        }
    }
    screen.close();
    return 0;
}
