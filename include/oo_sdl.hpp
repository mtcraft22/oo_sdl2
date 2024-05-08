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
        static void init_all();
        static void PrintError();
        static void quit();
    };
}