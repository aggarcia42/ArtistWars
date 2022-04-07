#ifndef GRID_HPP
#define GRID_HPP

#include "Colors.hpp"

#include <iostream>
#include <map>
#include <vector>


struct position
{
    int x;
    int y;
};

class Grid
{
    private:
    std::vector<std::vector<std::string >> colorValueMap;
    position coordinatesMax;
    public:
    Grid(const int x,const int y);
    ~Grid();

    int getXvalue() const;
    int getYvalue() const;

    void setXvalue(int newX);
    void setYvalue(int newY);

    std::vector<std::vector<std::string >> getMap() const;
    
    void setNewColor(position locateCoordinate, std::string newColor);

    void printGrid() const;

};

#endif