#include <SDL2/SDL.h>
#include "Window.hpp"
#pragma once
class Renderer {
	private:
		SDL_Renderer* renderer;
	public:
		Renderer(Window window, int index, UINT32 flags) {
			this->renderer = SDL_CreateRenderer(window.Getraw(), index, flags);
		}
};