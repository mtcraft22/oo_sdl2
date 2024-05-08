#include <SDL2/SDL.h>
#include <iostream>
#include "../include/oo_sdl.hpp"

#pragma once
static void SDL_OOP::SDL::init_all(){
	if(!SDL_Init(SDL_INIT_EVERYTHING)){
		PrintError();
		exit(-1);
	}
}
static void SDL_OOP::SDL::PrintError(){
	std::cout << SDL_GetError();
}
static void SDL_OOP::SDL::quit(){
	SDL_Quit();
}