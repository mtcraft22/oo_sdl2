#include <SDL2/SDL.h>
#include <iostream>
#include "bool.hpp"
#include "Renderer.hpp"
#include "Surface.hpp"
#include "Texture.hpp"
#include "Window.hpp"
#include "Event.hpp"
#pragma once
namespace SDL_OOP {
    class SDL {
        public:
        static void init_all(){
            if(!SDL_Init(SDL_INIT_EVERYTHING)){
                PrintError();
                exit(-1);
            }
        }
        static void PrintError(){
            std::cout << SDL_GetError();
        }
        static void quit(){
            SDL_Quit();
        }
    };
}