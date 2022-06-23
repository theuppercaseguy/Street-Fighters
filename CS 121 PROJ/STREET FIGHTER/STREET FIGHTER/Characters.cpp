#include "Characters.h"

//creating different characters/all characters according to user
void Character::create_player(string player_name,SDL_Renderer *grender) {
	if (player_name == "sub-zero") {

		player1_x_posiotion = 300, player1_y_posiotion = 400;
		//idle position
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/06.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/07.png")));
		//walking
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/walking9.png")));
		//punch from right side
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 1 .png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 2 .png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 3 .png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 4 .png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 5 .png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/punch 6 .png")));
		//kick
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/k06.png")));
		//special move
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/101.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/102.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/103.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/104.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/105.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/106.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/107.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/108.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/109.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/110.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/111.png")));
		//duck
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/d01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/d02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/d03.png")));
		//death
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h06.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h07.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h09.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/h10.png")));
		//jump 
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/j01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/j02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/j03.png")));
		//duck punch
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/dpunch01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/dpunch02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/dpunch03.png")));
		//when recieves a hit
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/hit01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/hit02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/hit03.png")));
		//nut hit
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/n01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/sub-zero/n02.png")));

		for (int i = 0; i < sprites.size(); ++i) {
			if (sprites[i] == NULL) {
				cerr << "sprite " << i << " not loaded " << SDL_GetError() << endl;
			}
		}

	}
	else if (player_name == "lori") {
		player1_y_posiotion = 400;
		//setting intioal positions
		//idle
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Idle9.png")));
		//walk front 
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront9.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkFront10.png")));
		//walk back
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/WalkBack9.png")));
		//punch
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Punch9.png")));
		//kick
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick9.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Kick10.png")));
		//combo
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo9.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo10.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo11.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo12.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo13.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo14.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo15.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo16.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo17.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo18.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo19.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo20.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo21.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo22.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo23.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo24.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo25.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo26.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Combo27.png")));
		//duck
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Duck9.png")));
		//dead
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead9.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Dead10.png")));
		//jump
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump8.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/lefties/lori/Jump9.png")));


		for (int i = 0; i < sprites.size(); i++) {
			if (sprites[i] == NULL) {
				cerr << "error loading lori sprite " << i << SDL_GetError() << endl;
			}
		}
	}
	if (player_name == "ryo") {
		player2_y_posiotion = 400;
		//idle
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Idle4.png")));
		//walk front 
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkFront6.png")));
		//walk back
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/WalkBack5.png")));
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
		//kick
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick4.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick5.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick6.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick7.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Kick8.png")));
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
		//duckd
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Duck1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Duck2.png")));
		//dead
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead3.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Dead4.png")));
		//jump
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump1.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump2.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/ryo/Jump3.png")));

		for (int i = 0; i < sprites.size(); i++) {
			if (sprites[i] == NULL) {
				cerr << "error loading ryo sprite " << i << SDL_GetError() << endl;
			}
		}
	}
	else if (player_name == "scorpio") {
		player2_y_posiotion = 400;
		//idle 0-5
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/06.png")));
		//walk 6-14
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a06.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a07.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a08.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/a09.png")));
		//punch 15-22
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p01.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p06.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p07.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/p08.png")));
		//kick 23-29
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/01k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/02k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/03k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/04k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/05k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/06k.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/07k.png")));
		//combo 30-44
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/01c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/02c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/03c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/04c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/05c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/06c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/07c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/08c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/11c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/12c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/13c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/14c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/15c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/16c.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/17c.png")));
		//duck 45
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/d03.png")));
		//death 46-52
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b02.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b03.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b04.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b05.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b06.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b07.png")));
		sprites.push_back(SDL_CreateTextureFromSurface(grender, IMG_Load("characters/righties/scorpio/b08.png")));
		for (int i = 0; i < sprites.size(); i++) {
			if (sprites[i] == NULL) {
				cerr << "error loading scorpio sprite " << i << SDL_GetError() << endl;
			}
		}
	}
}


SDL_Texture* Character::getsprite(int no) {
	return sprites[no];
}

//handling everyy key press
void Character::handleEvent(SDL_Event& e,bool keys[],bool &up_key_flag,bool &down_key_flag, bool &left_key_flag,bool &right_key_flag) {
	//If a key was pressed
	if (e.type == SDL_KEYDOWN && e.key.repeat == 0) {
		//Adjust the velocity
		switch (e.key.keysym.sym) {
		case SDLK_w: mVelY1 -= player_velocity; break;
		case SDLK_s: mVelY1 += player_velocity; break;
		case SDLK_a: mVelX1 -= player_velocity; break;
		case SDLK_d: mVelX1 += player_velocity; break;
		case SDLK_UP: mVelY2 -= player_velocity; up_key_flag = true; break;
		case SDLK_DOWN: mVelY2 += player_velocity; down_key_flag = true; break;
		case SDLK_LEFT: mVelX2 -= player_velocity; left_key_flag = true; break;
		case SDLK_RIGHT: mVelX2 += player_velocity; right_key_flag = true; break;
		}
		if (e.key.keysym.sym < 332 && e.key.keysym.sym >= 0) {
			keys[e.key.keysym.sym] = true;//if any other key on the keyboard was pressed other than
										//which are used for movement, register them as true
		}
	}

	//If a key was released
	else if (e.type == SDL_KEYUP && e.key.repeat == 0) {
		//Adjust the velocity
		switch (e.key.keysym.sym) {
		case SDLK_w: mVelY1 += player_velocity; break;
		case SDLK_s: mVelY1 -= player_velocity; break;
		case SDLK_a: mVelX1 += player_velocity; break;
		case SDLK_d: mVelX1 -= player_velocity; break;
		case SDLK_UP: mVelY2 += player_velocity; up_key_flag = false; break;
		case SDLK_DOWN: mVelY2 -= player_velocity; down_key_flag = false; break;
		case SDLK_LEFT: mVelX2 += player_velocity; left_key_flag = false; break;
		case SDLK_RIGHT: mVelX2 -= player_velocity; right_key_flag = false; break;
		}
		if (e.key.keysym.sym < 332 && e.key.keysym.sym >= 0) {
			keys[e.key.keysym.sym] = false;
		}
	}

}

//rendering ftn 
void Character::render(int x, int y, SDL_Texture* tex, SDL_Rect* clip,SDL_Renderer* grender) {
	//Set rendering space and render to screen
	SDL_Rect renderQuad = { x, y, 200, 120 };//these  are disposible values of no use

	//Set clip rendering dimensions
	if (clip != NULL) {
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}
	SDL_RenderCopy(grender, tex, NULL, &renderQuad);
}


//movement for character 1
void Character::walk1(SDL_Renderer *grender,bool keys[],string player_selected[],bool &player1_won,bool& player2_won,bool& won,double lori_flags[],double subzero_flags[],SDL_Rect grect,
					SDL_Rect g_mortal_combat_rects, SDL_Rect death_rect,SDL_Rect &health1_rect, SDL_Rect& health2_rect,Mix_Chunk* punch, Mix_Chunk* kick) {
	//all these variables are neccessary and i passed them so there we dont have to deal with unwanted/globala decleration of variables, cause globals are always bad
	
	//loading text according to the keys pressed
	if ((keys[SDLK_a] == true || keys[SDLK_s] == true || keys[SDLK_d] == true 
		|| keys[SDLK_f] == true || keys[SDLK_g] == true || keys[SDLK_h] == true)) {

		if (player2_won == false) {//if the other player has not won
		
			if (won == false) {//if none of them has won the game
			
				if (player_selected[0] == "lori") {//rendereing lori images
					if (keys[SDLK_a] == true) {
						if (lori_flags[10] < 16) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[10]), &grect,grender);
							lori_flags[10] += 0.15;
						}
						if (lori_flags[10] > 15) { lori_flags[10] = 11; }
					}
					else if (keys[SDLK_d] == true) {
						if (lori_flags[1] < 29) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[1]), &grect, grender);
							lori_flags[1] += 0.15;
						}
						if (lori_flags[1] > 28) { lori_flags[1] = 19; }
					}
					else if (keys[SDLK_s] == true) {
						if (lori_flags[5] < 83) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[5]), &grect, grender);
							lori_flags[5] += 0.15;
						}
						if (lori_flags[5] > 82) { lori_flags[5] = 76; }
					}
					else if (keys[SDLK_w] == true) {
						if (lori_flags[7] < 102) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[7]), &grect, grender);
							lori_flags[7] += 0.15;
						}
						if (lori_flags[7] > 102) { lori_flags[7] > 94; }
					}
					else if (keys[SDLK_f] == true) {
						if (lori_flags[2] < 38) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[2]), &grect, grender);
							lori_flags[2] += 0.25;
						}
						if (lori_flags[2] > 37) { lori_flags[2] = 29; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 1; }//health reduction
						Mix_PlayChannel(-1, punch, 0);//playing punch sound							//90 is both players doesnot actula have to have the exact x cordinates for them to interact, same everywhere
					}
					else if (keys[SDLK_g] == true) {
						if (lori_flags[3] < 48) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[3]), &grect, grender);
							lori_flags[3] += 0.20;
						}
						if (lori_flags[3] > 47) { lori_flags[3] = 38; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 1; }
						Mix_PlayChannel(-1, kick, 0);//kick sound
					}
					else if (keys[SDLK_h] == true) {
						Mix_PlayChannel(-1, punch, 0);
						if (lori_flags[4] < 75) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[4]), &grect, grender);
							lori_flags[4] += 0.35;
						}
						if (lori_flags[4] > 74) { lori_flags[4] = 48; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 2; }
					}
				}
				else if (player_selected[0] == "sub-zero") {//rendering subzero images
					if (keys[SDLK_a] == true || keys[SDLK_d] == true) {
						if (subzero_flags[1] < 15) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[1]), &g_mortal_combat_rects, grender);
							subzero_flags[1] += 0.15;
						}
						if (subzero_flags[1] > 14) { subzero_flags[1] = 6; }
					}
					else if (keys[SDLK_s] == true) {
						if (subzero_flags[5] < 40) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[5]), &g_mortal_combat_rects, grender);
							subzero_flags[5] += 0.15;
						}
						if (subzero_flags[5] > 40) { subzero_flags[5] = 39; }
					}
					else if (keys[SDLK_w] == true) {
						if (subzero_flags[7] < 52) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[7]), &g_mortal_combat_rects, grender);
							subzero_flags[7] += 0.15;
						}
						if (subzero_flags[7] > 52) { subzero_flags[7] = 50; }
					}
					else if (keys[SDLK_f] == true) {
						if (subzero_flags[2] < 21) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[2]), &g_mortal_combat_rects, grender);
							subzero_flags[2] += 0.15;
						}
						if (subzero_flags[2] > 20) { subzero_flags[2] = 15; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 1; }
						Mix_PlayChannel(-1, punch, 0);
					}
					else if (keys[SDLK_g] == true) {
						if (subzero_flags[3] < 28) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[3]), &g_mortal_combat_rects, grender);
							subzero_flags[3] += 0.15;
						}
						if (subzero_flags[3] >= 27) { subzero_flags[3] = 22; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 1; }
						Mix_PlayChannel(-1, kick, 0);
					}
					else if (keys[SDLK_h] == true) {
						Mix_PlayChannel(-1, punch, 0);
						if (subzero_flags[4] < 38) {
							render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[4]), &g_mortal_combat_rects, grender);
							subzero_flags[4] += 0.15;
						}
						if (subzero_flags[4] > 37) { subzero_flags[4] = 27; }
						if (player1_x_posiotion + 90 >= player2_x_posiotion) { health2_rect.x += 2; }
					}
				}

				if (health2_rect.x >= 900) { player1_won = true; won = true; }
			}
		}
	}
	//rendering idle images of both player
	else if (health1_rect.x > -333) {
		if (player_selected[0] == "sub-zero") {
			if (subzero_flags[0] < 6) {
				render(player1_x_posiotion, player1_y_posiotion, getsprite(subzero_flags[0]), &g_mortal_combat_rects, grender);
				subzero_flags[0] += 0.15;
			}
			if (subzero_flags[0] >= 6) { subzero_flags[0] = 0; }
		}
		if (player_selected[0] == "lori") {
			if (lori_flags[0] < 9) {
				render(player1_x_posiotion, player1_y_posiotion, getsprite(lori_flags[0]), &grect, grender);
				lori_flags[0] += 0.3;
			}
			if (lori_flags[0] >= 9) { lori_flags[0] = 0; }
		}
	}
	//rendering death/losing images of both players
	else {
		if (player_selected[0] == "sub-zero") {
			if (subzero_flags[6] < 49) {
				render(0, 400, getsprite(subzero_flags[6]), &death_rect, grender);
				subzero_flags[6] += 0.15;
			}
			if (subzero_flags[6] >= 49) { subzero_flags[6] = 49; }
		}
		if (player_selected[0] == "lori") {
			if (lori_flags[6] < 93) {
				render(0, 500, getsprite(lori_flags[6]), &death_rect, grender);
				lori_flags[6] += 0.3;
			}
			if (lori_flags[6] >= 93) { lori_flags[6] = 92; }
		}
	}
}


//movement for character 2
void Character::walk2(bool& up_key_flag, bool& down_key_flag, bool& right_key_flag, bool& left_key_flag,bool keys[],bool& player1_won,bool& player2_won,
						bool& won,string player_selected[],double ryo_flags[], double scorpio_flags[],SDL_Rect grect, SDL_Rect g_mortal_combat_rects,
						SDL_Rect death_rect, SDL_Rect &health1_rect, SDL_Rect &health2_rect, Mix_Chunk*punch, Mix_Chunk* kick,SDL_Renderer* grender)
{
	//everything is same as in walk one, excep the players are different/for player 2
	// and the up down left right key presses are seperetly defined and used cause the sdl ones were haveing too many problems
	//so this was the easy way todo it

	if (down_key_flag == true || right_key_flag || left_key_flag == true
		|| keys[SDLK_j] == true || keys[SDLK_l] == true || keys[SDLK_k] == true) {

		if (player1_won == false) {
			if (won == false) {
				if (player_selected[1] == "ryo") {
					if (left_key_flag == true) {
						if (ryo_flags[1] < 11) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[1]), &grect, grender);
							ryo_flags[1] += 0.15;
						}
						if (ryo_flags[1] >= 11) { ryo_flags[1] = 5; }
					}
					else if (right_key_flag == true) {
						if (ryo_flags[1] < 16) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[1]), &grect, grender);
							ryo_flags[1] += 0.15;
						}
						if (ryo_flags[1] >= 16) { ryo_flags[1] = 11; }
					}
					else if (up_key_flag == true) {
						if (ryo_flags[7] < 56) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[7]), &grect, grender);
							ryo_flags[7] += 0.15;
						}
						if (ryo_flags[7] >= 56) { ryo_flags[7] = 53; }
					}
					else if (down_key_flag == true) {
						render(player2_x_posiotion, player2_y_posiotion, getsprite(48), &grect, grender);
					}
					else if (keys[SDLK_l] == true) {
						if (ryo_flags[2] < 24) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[2]), &grect, grender);
							ryo_flags[2] += 0.35;
						}
						if (ryo_flags[2] >= 24) { ryo_flags[2] = 15; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 1; }
						Mix_PlayChannel(-1, punch, 0);
					}
					else if (keys[SDLK_k] == true) {
						if (ryo_flags[3] < 32) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[3]), &grect, grender);
							ryo_flags[3] += 0.20;
						}
						if (ryo_flags[3] >= 32) { ryo_flags[3] = 24; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 1; }
						Mix_PlayChannel(-1, kick, 0);
					}
					else if (keys[SDLK_j] == true) {
						Mix_PlayChannel(-1, punch, 0);
						if (ryo_flags[4] < 47) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[4]), &grect, grender);
							ryo_flags[4] += 0.25;
						}
						if (ryo_flags[4] >= 47) { ryo_flags[4] = 32; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 2; }
					}
				}
				else if (player_selected[1] == "scorpio") {
					if (left_key_flag == true) {
						if (ryo_flags[1] < 11) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[1]), &g_mortal_combat_rects, grender);
							ryo_flags[1] += 0.15;
						}
						if (ryo_flags[1] >= 11) { ryo_flags[1] = 6; }
					}
					else if (right_key_flag == true) {
						if (ryo_flags[1] < 11) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[1]), &g_mortal_combat_rects, grender);
							ryo_flags[1] += 0.15;
						}
						if (ryo_flags[1] >= 11) { ryo_flags[1] = 6; }
					}
					else if (down_key_flag == true) {
						render(player2_x_posiotion, player2_y_posiotion, getsprite(45), &g_mortal_combat_rects, grender);
					}
					else if (keys[SDLK_l] == true) {
						if (ryo_flags[2] < 24) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[2]), &g_mortal_combat_rects, grender);
							ryo_flags[2] += 0.15;
						}
						if (ryo_flags[2] >= 24) { ryo_flags[2] = 15; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 1; }
						Mix_PlayChannel(-1, punch, 0);
					}
					else if (keys[SDLK_k] == true) {
						if (ryo_flags[3] < 30) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[3]), &g_mortal_combat_rects, grender);
							ryo_flags[3] += 0.15;
						}
						if (ryo_flags[3] >= 30) { ryo_flags[3] = 24; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 1; }
						Mix_PlayChannel(-1, kick, 0);
					}
					else if (keys[SDLK_j] == true) {
						Mix_PlayChannel(-1, punch, 0);
						if (ryo_flags[4] < 45) {
							render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[4]), &g_mortal_combat_rects, grender);
							ryo_flags[4] += 0.15;
						}
						if (ryo_flags[4] >= 45) { ryo_flags[4] = 30; }
						if (player2_x_posiotion - 90 <= player1_x_posiotion) { health1_rect.x -= 2; }
					}
				}

				if (health1_rect.x <= -333) { player2_won = true; won = true; }
			}
		}
	}
	//idle
	else if (health2_rect.x < 900) {
		if (player_selected[1] == "ryo") {
			if (ryo_flags[0] < 3) {
				render(player2_x_posiotion, player2_y_posiotion, getsprite(ryo_flags[0]), &grect, grender);
				ryo_flags[0] += 0.20;
			}
			if (ryo_flags[0] >= 3) { ryo_flags[0] = 0; }
		}
		else if (player_selected[1] == "scorpio") {
			if (scorpio_flags[0] < 6) {
				render(player2_x_posiotion, player2_y_posiotion, getsprite(scorpio_flags[0]), &g_mortal_combat_rects, grender);
				scorpio_flags[0] += 0.15;
			}
			if (scorpio_flags[0] >= 6) { scorpio_flags[0] = 0; }
		}
	}
	//death
	else {
		if (player_selected[1] == "ryo") {
			if (ryo_flags[6] < 53) {
				render(650, 500, getsprite(ryo_flags[6]), &death_rect, grender);
				ryo_flags[6] += 0.20;
			}
			if (ryo_flags[6] >= 53) { ryo_flags[6] = 52; }
		}
		else if (player_selected[1] == "scorpio") {
			if (scorpio_flags[6] < 52) {
				render(630, 400, getsprite(scorpio_flags[6]), &death_rect, grender);
				scorpio_flags[6] += 0.15;
			}
			if (scorpio_flags[6] >= 52) { scorpio_flags[6] = 52; }
		}
	}
}

//actual changin of the of position for both players
void Character::move(bool won,int window_width,int window_height) {
	if (won == false) {//only move when no one has won
		//player1
		//Move the player left or right

		player1_x_posiotion += mVelX1;//not out of window bounds							can go further if the other player is in front
		//If the player went too far to the left or right
		if ((player1_x_posiotion < 0) || (player1_x_posiotion + player_width > window_width) || (player1_x_posiotion >= player2_x_posiotion)) {
			//Move back
			player1_x_posiotion -= mVelX1;
		}

		//player 2
		player2_x_posiotion += mVelX2;	//not out of window bounds							can go further if the other player is in front
		if ((player2_x_posiotion < 0) || (player2_x_posiotion + player_width > window_width) || (player2_x_posiotion <= player1_x_posiotion)) {
			//Move back
			player2_x_posiotion -= mVelX2;
		}
	}
}


void Character::delete_characters() {
	//SDL_DestroyTexture(sprites);
	{ sprites.clear(); }
}
//uisng these 2 ftns instead of a destroyer
void Character::reset() {
	player1_x_posiotion = 300; player2_x_posiotion = 500;
}
