#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <iostream>
#include <SDL2/SDL.h>

class Screen
{
    private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;
    public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;

    Screen();
    ~Screen();
    bool init();
    void close();
    bool processEvents();

};

#endif