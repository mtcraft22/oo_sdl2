#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <cstddef>
#include "Texture.hpp"
#include "Window.hpp"
#pragma once
namespace SDL_OOP {
	class Renderer {
	private:
		SDL_Renderer* renderer;
	public:
		Renderer(Window window, int index, Uint32 flags) {
			this->renderer = SDL_CreateRenderer(window.Getraw(), index, flags);
		}
		Renderer(Window window, int index, Uint32 flags,SDL_BlendMode blendMode, Uint32 color){
			this->renderer = SDL_CreateRenderer(window.Getraw(), index, flags);
			SDL_SetRenderDrawBlendMode(this->renderer,blendMode);
			SDL_SetRenderDrawColor(this->renderer, color >> 24 & 0xff, color >> 16 & 0xff, color>>8 &0xff, color & 0xff);
		}
		~Renderer(){
			SDL_DestroyRenderer(this->renderer);
		}
		void copy(Texture texture,SDL_Rect *srcrect=NULL,SDL_Rect dstrect={0,0,0,0} ){
			SDL_RenderCopy(this->renderer, texture.GetRaw(), srcrect, &dstrect);
		}
		void present(){
			SDL_RenderPresent(this->renderer);
		}
		SDL_Renderer * GetRaw(){return this->renderer;}
};
}
