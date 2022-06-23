#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
using namespace std;
#include "Characters.h"

class Fighters
{
	vector<SDL_Texture*> background;

public:
	//public variable to be used alll over the game	
	int state = 0; //0 for main menu, 1 for in game
	
	SDL_Window *gwindow = NULL;
	SDL_Renderer* grender = NULL;
	
	const int window_width = 900;
	const int window_height = 700;
	
	SDL_Texture* map;//maps
	SDL_Texture* inst;//instructuions
	SDL_Surface* colorkey[4];//4 diff pics for 4 characters
	
	//4 texture for the images on the main menu
	SDL_Texture* sub_zero;
	SDL_Texture* lori;
	SDL_Texture* ryo;
	SDL_Texture* scorpio;
	
	//displaying the win texture
	SDL_Texture* win[2];
	
	//rect for where to present the picture
	SDL_Rect pic[2];
	
	//flags for rendering different movements
	double subzero_flags[11];
	double lori_flags[11];
	double ryo_flags[11];
	double scorpio_flags[11];
	//later they are used as int, which does give a warining
	// 	   but because of this that when convert a double to integer it either
	// 	   ceils the number if floors it we used this in rendering
	
	//all the keys
	bool keys[332];
	
	//health bar reacrs
	SDL_Rect health1_rect;
	SDL_Rect health2_rect;
	
	//death rect
	SDL_Rect death_rect;
	
	//sound related variables
	Mix_Chunk* punch;
	Mix_Chunk* kick;
	Mix_Music* win_sound;
	Mix_Chunk* sound_affect;
	Mix_Music* background_music;
	bool sound_flag = false;
	
	//is the game running
	bool is_running = false;
	
	//flags for player selection
	bool flag[4];
	
	//selected player name
	string player_selected[2];
	bool first_player_selected = false;
	bool second_player_selected = false;
	bool both_player_selected = false;
	
	//number of images for the main mennu to load
	int background_images = 0;
	bool inst_flag = false;//instruction flag, shown or not to be shown
	SDL_Rect instrect = { 100,100,700,500 };//for instruction where to be shown
	
											//for players size
	SDL_Rect grect = { 0,0,150,300 };
	SDL_Rect g_mortal_combat_rects = { 0,0,100,260 };
	
	//players
	Character player1;
	Character player2;
	
	//if anyone has won
	bool won = false;
	bool player1_won = false;
	bool player2_won = false;
	bool won_flag = true;//to know if the computer needs to say you won
	bool again = true;//to play the game again
	
	//arrow key flags
	bool up_key = false;
	bool down_key = false;
	bool right_key = false;
	bool left_key = false;

	//main event
	SDL_Event main_event;
	
	//initializes every thing inthe game
	void initialze();
	
	//loads musics
	void load_background_music(int state);
	
	//loads sound effect
	bool load_sound_effect(const string& path, int repetition);
	
	//loads main menu
	void load_main_menu(SDL_Event main_event);
	
	//starts the game
	void start_game();
	
	//check if any one has won
	void won_check();
	
	//close everything
	void close();
	



};

