#include "../include/oo_sdl.hpp"
#include <SDL2/SDL_stdinc.h>
#include <cstdint>

int main(int argc, char** argv){
    SDL_OOP::SDL::init_all();
    SDL_OOP::Window ventana = SDL_OOP::Window("Test 1",0,0,1020,720,SDL_WINDOW_SHOWN);
    SDL_OOP::Renderer ctx = SDL_OOP::Renderer(ventana,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
    SDL_OOP::Surface surf = SDL_OOP::Surface(0,100,100,8,SDL_PIXELFORMAT_ABGR8888);
   
    surf.Lock();
    void* pixels = surf.Getpixels();
    (Uint32)pixels[0] = 255 << 24 | 0<<16 | 0<<8 | 255 ;
    surf.Setpixels(pixels);
    surf.UnLock();

    bool run = true;
    while (run) {
        
    }
}