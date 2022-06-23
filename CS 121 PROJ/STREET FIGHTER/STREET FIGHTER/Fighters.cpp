#include "Fighters.h"

void Fighters::initialze()
{

	cout << "initializing....\n";
	SDL_Init(SDL_INIT_EVERYTHING || SDL_INIT_AUDIO);

	gwindow = SDL_CreateWindow("STREET FIGHTERS", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window_width, window_height, SDL_WINDOW_SHOWN);
	if (gwindow == NULL) {
		cerr << endl << "error creating window, eixiting " << SDL_GetError() << endl;
		exit(-1);
	}
	else {
		grender = SDL_CreateRenderer(gwindow, -1, SDL_RENDERER_ACCELERATED || SDL_RENDERER_PRESENTVSYNC);
		if (grender == NULL) {
			cerr << endl << "error creating renderer, eixiting " << SDL_GetError() << endl;
			exit(-1);
		}
	}
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
		exit(-1);
	}

	IMG_INIT_JPG;
	IMG_INIT_PNG;
	MIX_INIT_MP3;
	MIX_INIT_OGG;

	if (TTF_Init() == -1) {
		cerr << "error initializing fonts" << TTF_GetError() << endl;
	}

	state = 0;//setting game state

	//loading background of the main menu
	{
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-001.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-002.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-003.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-004.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-005.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-006.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-007.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-008.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-009.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-010.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-011.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-012.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-013.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-014.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-015.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-016.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-017.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-018.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-019.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-020.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-021.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-022.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-023.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-024.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-025.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-026.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-027.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-028.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-029.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-030.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-031.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-032.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-033.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-034.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-035.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-036.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-037.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-038.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-039.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-040.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-041.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-042.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-043.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-044.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-045.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-046.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-047.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-048.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-049.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-050.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-051.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-052.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-053.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-054.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-055.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-056.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-057.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-058.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-059.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-060.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-061.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-062.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-063.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-064.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-065.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-066.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-067.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-068.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-069.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-070.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-071.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-072.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-073.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-073.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-075.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-076.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-077.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-078.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-079.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-080.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-081.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-082.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-083.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-084.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-085.jpg")));
		background.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/mm/ezgif-frame-086.jpg")));

		for (int i = 0; i < background.size(); i++) {
			if (background[i] == NULL)
				cout << "error loading background no: " << i << "image " << SDL_GetError() << endl;
		}
	}

	//load main menu music
	load_background_music(state);

	//loading maps
	map = SDL_CreateTextureFromSurface(grender, IMG_Load("maps/map1.jpg"));

	//instructions loading
	inst = SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/instructions.png"));

	//texts
	colorkey[0] = IMG_Load("main_menu/sub-zero.png");
	colorkey[1] = IMG_Load("main_menu/lori.png");
	colorkey[2] = IMG_Load("main_menu/ryo.png");
	colorkey[3] = IMG_Load("main_menu/scorpio.png");

	sub_zero = SDL_CreateTextureFromSurface(grender, colorkey[0]);
	lori = SDL_CreateTextureFromSurface(grender, colorkey[1]);
	ryo = SDL_CreateTextureFromSurface(grender, colorkey[2]);
	scorpio = SDL_CreateTextureFromSurface(grender, colorkey[3]);

	win[0] = SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/won1.png"));
	win[1] = SDL_CreateTextureFromSurface(grender, IMG_Load("main_menu/won2.png"));

	//color 2 rect
	pic[0] = { 10,50,400,600 };
	pic[1] = { 500,50,400,600 };

	//intializing every flag of each fighter
	{
		//idle
		subzero_flags[0] = 0;//upto 5
		lori_flags[0] = 0;//8
		ryo_flags[0] = 0;//3
		scorpio_flags[0] = 0;

		//walking
		subzero_flags[1] = 6;/*upto 14*/
		lori_flags[1] = 9;/*upto 18 //walk back */lori_flags[10] = 19;//upto 28
		ryo_flags[1] = 4;/*upto 9 //walk back */ryo_flags[10] = 10;//upto 14
		scorpio_flags[1] = 6;

		//punching
		subzero_flags[2] = 15;/*upto 20*/
		lori_flags[2] = 29;/*upto 37 */
		ryo_flags[2] = 15;/*upto 23 */
		scorpio_flags[2] = 15;

		//kicking
		subzero_flags[3] = 21;/*upto 26*/
		lori_flags[3] = 38;/*upto 47 */
		ryo_flags[3] = 24;/*upto 31 */
		scorpio_flags[3] = 24;

		//special
		subzero_flags[4] = 27;/*upto 37*/
		lori_flags[4] = 48;/*upto 74 */
		ryo_flags[4] = 32;//upto  46
		scorpio_flags[4] = 30;

		//ducking
		subzero_flags[5] = 38;/*upto 40*/
		lori_flags[5] = 76;//upto  83
		ryo_flags[5] = 47;//upto 48 
		scorpio_flags[5] = 45;

		//death
		subzero_flags[6] = 41;/*upto 49 */
		lori_flags[6] = 84;//upto 93
		ryo_flags[6] = 49;//upto 52
		scorpio_flags[6] = 46; //52

		//jump
		subzero_flags[7] = 50;/*upto 52 */
		lori_flags[7] = 94;//upto 102
		ryo_flags[7] = 53;//upto 55
		scorpio_flags[7] = 0;
	}

	//keys
	for (int i = 0; i < 332; i++) { keys[i] = false; }

	//health system
	health1_rect = { 0,50, 1000 / 3, 20 };
	health2_rect = { 567,50, 1000 / 3, 20 };

	death_rect = { 0,0,250,300 };

	// loading sound effects
	punch = Mix_LoadWAV("sounds/Punch.ogg");
	kick = Mix_LoadWAV("sounds/Kick.ogg");
	win_sound = Mix_LoadMUS("sounds/you_win.wav");
	//if the game is running
	is_running = true;

	cout << "initializing done\n";
}

void Fighters::load_background_music(int state)
{
	if (state == 0) {
		background_music = Mix_LoadMUS("sounds/main_menu_background_music.ogg");
		if (background_music == NULL) {
			cerr << "failed to load the background music " << Mix_GetError() << endl;
		}
		Mix_PlayMusic(background_music, -1);
	}
	else if (state == 1) {
		background_music = Mix_LoadMUS("sounds/fighting_background_music.ogg");
		if (background_music == NULL) {
			cerr << "failed to load the fighting background music " << Mix_GetError() << endl;
		}
		Mix_PlayMusic(background_music, -1);

	}



}

bool Fighters::load_sound_effect(const string& path, int repetition = 0) {
	sound_affect = Mix_LoadWAV(path.c_str());
	if (sound_affect == NULL) {
		cerr << "failed to load the sound effect music " << Mix_GetError() << endl;
	}
	else {
		Mix_PlayChannel(-1, sound_affect, repetition);
	}
	return 1;//for success
}

void Fighters::load_main_menu(SDL_Event main_event) {
	if (state == 0) {
		SDL_RenderClear(grender);
		if (background_images <= 86) {
			SDL_RenderCopy(grender, background[background_images], NULL, NULL);
			background_images += 0.41;
			if (background_images >= 86)
				background_images = 85;
		}

		//player selected text
		if (flag[0] == true)
			SDL_RenderCopy(grender, lori, NULL, &pic[0]);
		if (flag[1] == true)
			SDL_RenderCopy(grender, sub_zero, NULL, &pic[0]);
		if (flag[2] == true)
			SDL_RenderCopy(grender, ryo, NULL, &pic[1]);
		if (flag[3] == true)
			SDL_RenderCopy(grender, scorpio, NULL, &pic[1]);



		if (main_event.key.keysym.sym == 105) {//ascii code for i 
			inst_flag = true;
		}
		else if (main_event.key.keysym.sym == 8) {//asciii code for backspace
			inst_flag = false;
		}

		if (inst_flag == true) {
			SDL_RenderCopy(grender, inst, NULL, &instrect);
		}

	}
}

void Fighters::start_game() {
	if (state == 1) {//game started
		
		//displaying the map
		SDL_RenderClear(grender);
		SDL_RenderCopy(grender, map, NULL, NULL);//show map

		SDL_SetRenderDrawColor(grender, 255, 0, 0, 255);
		SDL_RenderFillRect(grender, &health1_rect);//show health bars

		SDL_SetRenderDrawColor(grender, 0, 0, 255, 255);//show health bars
		SDL_RenderFillRect(grender, &health2_rect);

		//used in main while loop for movement
		player1.move(won,window_width,window_height);
		player2.move(won, window_width, window_height);


		//used in main while loop for rendering movement
		player1.walk1(grender, keys, player_selected, player1_won, player2_won, won, lori_flags, subzero_flags, grect,
			g_mortal_combat_rects, death_rect, health1_rect, health2_rect, punch, kick);
		
		//used in main while loop for rendering movement
		player2.walk2(up_key, down_key, right_key, left_key, keys, player1_won, player2_won, won, player_selected, ryo_flags,
			scorpio_flags, grect, g_mortal_combat_rects, death_rect, health1_rect, health2_rect, punch, kick, grender);

	
		won_check();

	}
}

void Fighters::won_check() {
	if (won == true) {
		if (won_flag == true) {
			Mix_PlayMusic(win_sound, 0);
			won_flag = false;
		}

		if (player1_won == true) {
			SDL_RenderCopy(grender, win[0], NULL, NULL);
		}
		if (player2_won == true) {
			SDL_RenderCopy(grender, win[1], NULL, NULL);
		}

		//re-initializing every thing on enter key
		if (main_event.key.keysym.sym == 13) {
			//again = false;
			is_running = false;
			won_flag = true;

			background_images = 0;

			//recreacting the players
			(&player1)->delete_characters();
			(&player2)->delete_characters();

			new (&player1) Character;
			new (&player2) Character;
			player1.reset();
			player2.reset();

			load_background_music(state);
			inst_flag = false;
			sound_flag = false;

			//keys
			for (int i = 0; i < 332; i++) { keys[i] = false; }

			health1_rect = { 0,50, 1000 / 3, 20 };
			health2_rect = { 567,50, 1000 / 3, 20 };

			first_player_selected = false;
			second_player_selected = false;
			both_player_selected = false;

			flag[0] = false;
			flag[1] = false;
			flag[2] = false;
			flag[3] = false;

			won = false;
			player1_won = false;
			player2_won = false;

			player_selected[0] = "";
			player_selected[1] = "";

			state = 0;

		}
		else if (keys[SDLK_ESCAPE] == true) {
			is_running = false;
			again = false;
		}
	}
}

void Fighters::close() {
	SDL_QUIT;
	IMG_Quit();
	TTF_Quit();
	Mix_Quit();
	background.clear();
	SDL_DestroyRenderer(grender);
	SDL_DestroyWindow(gwindow);
}




