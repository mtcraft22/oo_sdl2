#include "Renderer.hpp"
#include <SDL2/SDL.h>
#pragma once

namespace SDL_OOP{
	class Texture {
	private:
		SDL_Texture* texture;
		void** pixels = NULL;
		int pitch;
	public:
		Texture(Renderer renderer ,int w,int h, Uint32 format = SDL_PIXELFORMAT_RGBA32, int access = SDL_TEXTUREACCESS_STREAMING) {
			
			this->texture = SDL_CreateTexture(renderer.GetRaw(), format, access, w, h);
		}
		
		Texture(SDL_Texture* texture) { this->texture = texture; }
		~Texture() { SDL_DestroyTexture(this->texture);}
		SDL_Texture* GetRaw() {
			return this->texture;
		}	
		void Lock(SDL_Rect *rect) {
			SDL_LockTexture(this->texture,rect,this->pixels, &this->pitch);
			
		}
		void UnLock() {
			SDL_UnlockTexture(this->texture);
		}
		void* Getpixels() {
			return this->pixels;
		}
		
		void GetDimensions(int* w, int* h) {
			SDL_QueryTexture(this->texture, NULL, NULL, w, h);
		}
		int GetAccess(){
			int a;
			SDL_QueryTexture(this->texture, NULL, &a, NULL, NULL);
			return a;
		}
		Uint32 GetFormat(){
			Uint32 format;
			SDL_QueryTexture(this->texture, &format, NULL, NULL, NULL);
			return format;

		}
		void Setpixels(void** pixels) {
			this->pixels = pixels;
		}
};
}