#pragma once
#include "globals.h"
class Vendetta
{
private:
	vector <SDL_Texture*> background;
public:
	int initialize();

	void load_main_menu();

	void start_game(SDL_Event ev);

	void close();
};

