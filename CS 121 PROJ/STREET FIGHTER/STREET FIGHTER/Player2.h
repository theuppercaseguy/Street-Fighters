#pragma once
class Player2:public Player1 {

	vector<SDL_Texture*> sprites;
	//int x=250, y=300;//position

	//The X and Y offsets of the dot
	//int mPosX, mPosY;

	//The velocity of the dot
	//int mVelX, mVelY;

public:
	static const int DOT_WIDTH = 150;
	static const int DOT_HEIGHT = 300;

	//Maximum axis velocity of the dot
	static const int DOT_VEL = 6;

	Player2() {};
	void create_player(string player_name) {
		if (player_name == "ryo") {
			mPosX = 700, mPosY = 400;
			//idle
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle4.png")));
			//combo
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo4.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo5.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo6.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo7.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo8.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo9.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo10.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo11.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo12.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo13.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo14.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Combo15.png")));
			//dead
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead4.png")));
			//duckd
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Duck1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Duck2.png")));
			//jump
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump3.png")));
			//kick
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick4.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick5.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick6.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick7.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick8.png")));
			//punch
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch4.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch5.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch6.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch7.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch8.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Punch9.png")));
			//walk back
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack4.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack5.png")));
			//walk front 
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront1.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront2.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront3.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront4.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront5.png")));
			sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront6.png")));

			for (int i = 0; i < sprites.size(); i++) {
				if (sprites[i] == NULL) {
					cout << "error loading ryo sprite " << i << SDL_GetError() << endl;
				}
			}
		}
	}

	SDL_Texture* getsprite(int no) {
		return sprites[no];
	}

	void handleEvent(SDL_Event& e) {
		//If a key was pressed
		if (e.type == SDL_KEYDOWN && e.key.repeat == 0) {
			//Adjust the velocity
			switch (e.key.keysym.sym) {
			case SDLK_UP: mVelY -= DOT_VEL; break;
			case SDLK_DOWN: mVelY += DOT_VEL; break;
			case SDLK_LEFT: mVelX -= DOT_VEL; break;
			case SDLK_RIGHT: mVelX += DOT_VEL; break;
			}
		}
		//If a key was released
		else if (e.type == SDL_KEYUP && e.key.repeat == 0) {
			//Adjust the velocity
			switch (e.key.keysym.sym) {
			case SDLK_UP: mVelY += DOT_VEL; break;
			case SDLK_DOWN: mVelY -= DOT_VEL; break;
			case SDLK_RIGHT: mVelX += DOT_VEL; break;
			case SDLK_LEFT: mVelX -= DOT_VEL; break;
			}
		}
	}

	bool idle(SDL_Event ev) {
		if (player_selected[1] == "ryo") {
			if (ryo_flags[0] < 4) {
				render(mPosX, mPosY, getsprite(ryo_flags[0]), &grect);
				ryo_flags[0] += 0.20;
			}
			if (ryo_flags[0] >= 4) { ryo_flags[0] = 0; }
		}
		else if (player_selected[1] == "scorpio") {
			if (scorpio_flags[0] < 8) {
				render(mPosX, mPosY, getsprite(scorpio_flags[0]), &grect);
				scorpio_flags[0] += 0.15;
			}
			if (scorpio_flags[0] >= 4) { scorpio_flags[0] = 0; }
		}
		return 1;
	}

	void walk(SDL_Event e) {
		if (e.key.keysym.sym == SDLK_a || e.key.keysym.sym == SDLK_d) {
			if (player_selected[0] == "sub-zero") {
				if (subzero_flags[1] < 50) {
					render(mPosX, mPosY, getsprite(subzero_flags[1]), &grect);
					subzero_flags[1] += 0.15;
				}
				if (subzero_flags[1] >= 4) { subzero_flags[1] = 59; }
			}
			else if (player_selected[0] == "lori") {
				if (lori_flags[0] < 9) {
					render(mPosX, mPosY, getsprite(lori_flags[0]), &grect);
					lori_flags[0] += 0.15;
				}
				if (lori_flags[0] >= 4) { lori_flags[0] = 0; }
			}
		}
		else if (e.key.keysym.sym == SDLK_LEFT) {
			if (player_selected[1] == "ryo") {
				if (ryo_flags[0] < 4) {
					render(mPosX, mPosY, getsprite(ryo_flags[0]), &grect);
					ryo_flags[0] += 0.15;
				}
				if (ryo_flags[0] >= 4) { ryo_flags[0] = 0; }
			}
			else if (player_selected[1] == "scorpio") {
				if (scorpio_flags[0] < 8) {
					render(mPosX, mPosY, getsprite(scorpio_flags[0]), &grect);
					scorpio_flags[0] += 0.15;
				}
				if (scorpio_flags[0] >= 4) { scorpio_flags[0] = 0; }
			}
		}

	}

};

