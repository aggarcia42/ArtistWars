#include "Grid.hpp"


std::vector<std::vector<std::string >> newMapGenerator(position maxCoordinates)
{
    std::vector<std::vector<std::string >> newcolorValueMap (maxCoordinates.y, std::vector<std::string> (maxCoordinates.x));
    for(auto &item : newcolorValueMap)
    {
        for(auto &i : item)
        {
            i = WHITE;
        }
    }
    return newcolorValueMap;
}

Grid::Grid(const int x, const int y)
{
    this->coordinatesMax.x = x;
    this->coordinatesMax.y = y;
    this->colorValueMap = newMapGenerator(coordinatesMax);
}
Grid::~Grid()
{

}

int Grid::getXvalue() const
{
    return this->coordinatesMax.x;
}
int Grid::getYvalue() const
{
    return this->coordinatesMax.y;
}

std::vector<std::vector<std::string >> Grid::getMap() const
{
    return this->colorValueMap;
}

void Grid::setXvalue(int newX)
{
    this->coordinatesMax.x = newX;
}
void Grid::setYvalue(int newY)
{
    this->coordinatesMax.y = newY;
}

void Grid::setNewColor(position modifyCoordinate, std::string newColor)
{
    this->colorValueMap[modifyCoordinate.y - 1][modifyCoordinate.x - 1] = newColor;
}

void Grid::printGrid() const
{
    int y = 0;
    int x = 0;
    for(auto &item : this->colorValueMap)
    {
        for(auto &i : item)
        {
            std::cout << i << " [" << y << "]" << "[" << x << "] " << "; ";
            x++;
        }
        std::cout << "\n";
        x = 0;
        y++;
    }
}