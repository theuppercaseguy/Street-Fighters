#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
using namespace std;

class Character
{
	vector<SDL_Texture*> sprites;

	//The X and Y offsets of the dot
	int player1_x_posiotion = 0, player1_y_posiotion = 0;
	int player2_x_posiotion = 0, player2_y_posiotion = 0;

	//The velocity of the players
	int mVelX1 = 0, mVelY1 = 0;
	int mVelX2 = 0, mVelY2 = 0;

public:
	static const int player_width = 150;
	static const int player_height = 300;

	//Maximum velocity
	static const int player_velocity = 6;


	Character() :player1_x_posiotion(300), player2_x_posiotion(500) {}

	void create_player(string player_name, SDL_Renderer* grender);

	SDL_Texture* getsprite(int no);
	
	//handle every key press
	void handleEvent(SDL_Event& e, bool keys[], bool& up_key_flag, bool& down_key_flag, bool& left_key_flag, bool& right_key_flag);
	
	//render everything like every player movement or images
	void render(int x, int y, SDL_Texture* tex, SDL_Rect* clip, SDL_Renderer* grender);
	
	//movement for player 1
	void walk1(SDL_Renderer* grender, bool keys[], string player_selected[], bool &player1_won, bool &player2_won, bool &won, double lori_flags[], double subzero_flags[], SDL_Rect grect, SDL_Rect g_mortal_combat_rects, SDL_Rect death_rect, SDL_Rect& health1_rect, SDL_Rect& health2_rect, Mix_Chunk* punch, Mix_Chunk* kick);
	
	//movement for player 2
	void walk2(bool &up_key_flag, bool &down_key_flag, bool &right_key_flag, bool &left_key_flag, bool keys[], bool &player1_won, bool &player2_won, bool& won, string player_selected[], double ryo_flags[], double scorpio_flags[], SDL_Rect grect, SDL_Rect g_mortal_combat_rects, SDL_Rect death_rect, SDL_Rect &health1_rect, SDL_Rect& health2_rect, Mix_Chunk* punch, Mix_Chunk* kick, SDL_Renderer* grender);
	
	//actual chnaging of location on x axis for both players
	void move(bool won, int window_width, int window_height);

	void delete_characters();
	//usning these 2 instead of a destructor
	void reset();

	
	
	
	

};

