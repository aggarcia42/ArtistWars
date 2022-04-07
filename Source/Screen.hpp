#ifndef SCREEN_HPP
#define SCREEN_HPP


#include <iostream>
#include <SDL2/SDL.h>
#include "Grid.hpp"

class Screen
{
    private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;
    Grid colorGrid;
    public:
    const static int SCREEN_WIDTH = 1920;
    const static int SCREEN_HEIGHT = 1080;

    Screen();
    ~Screen();
    bool init();
    void update();
    void close();
    bool processEvents();

    Grid getColorGrid() const;
    void setPixel(position locateCoordinate, Uint8 red, Uint8 green, Uint8 blue);

};

#endif