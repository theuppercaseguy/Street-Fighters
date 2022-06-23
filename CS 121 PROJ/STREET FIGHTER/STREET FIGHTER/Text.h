#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
using namespace std;
class Text {
private:
	SDL_Texture* text_texture = NULL;
	mutable SDL_Rect text_rect = { 0 };
public:
	void create_text(const std::string& font_path, int font_size, const std::string& text_message, const SDL_Color& color, SDL_Renderer* grender) {

		text_texture = loadfont(font_path, font_size, text_message, color, grender);

		//this ftn automatically create the widht and the height for the corresponding text
		//SDL_QueryTexture(text_texture, NULL, NULL, &text_rect.w, &text_rect.h);
		text_rect.w = 330;
		text_rect.h = 330;
		//SDL_DestroyTexture(text_texture);
	}

	//displays the text
	void display(int x, int y, SDL_Renderer* grender)const {
		text_rect.x = x;
		text_rect.y = y;
		text_rect.w = 50;
		text_rect.h = 50;
		SDL_RenderCopy(grender, text_texture, NULL, &text_rect);
	}

	//creates a text, converts it to a texture and then returns it
	SDL_Texture* loadfont(const std::string& font_path, int font_size, const string& text_message, const SDL_Color& color, SDL_Renderer* &grender) {
		TTF_Font* font = NULL;

		font = TTF_OpenFont(font_path.c_str(), font_size);
		if (font == NULL) {
			cerr << "error loading font " << TTF_GetError() << endl;
			exit(-1);
		}

		SDL_Surface* text_surface = TTF_RenderText_Solid(font, text_message.c_str(), color);
		if (!text_surface) {
			cerr << "failed to create text surface " << endl;
			exit(-1);
		}

		text_texture = SDL_CreateTextureFromSurface(grender, text_surface);
		if (text_texture==NULL) {
			cerr << "failed ot create text surface " << SDL_GetError()<<endl;
			exit(-1);
		}

		SDL_FreeSurface(text_surface);
		TTF_CloseFont(font);

		return text_texture;
	}
};

