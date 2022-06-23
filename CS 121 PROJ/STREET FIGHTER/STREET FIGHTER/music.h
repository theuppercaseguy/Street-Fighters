#pragma once
class Music {
	Mix_Music* background_music = NULL;
	Mix_Chunk* sound_affect = NULL;
public:
	//loading music effects;

	int load_background_music(State state) {
		if (state == main_menu) {
			background_music = Mix_LoadMUS("sounds/main_menu_background_music.ogg");
			if (background_music == NULL) {
				cerr << "failed to load the background music " << Mix_GetError() << endl;
			}
			Mix_PlayMusic(background_music, -1);
		}
		if (state == fighting) {
			background_music = Mix_LoadMUS("sounds/fighting_background_music.ogg");
			if (background_music == NULL) {
				cerr << "failed to load the fighting background music " << Mix_GetError() << endl;
			}
			Mix_PlayMusic(background_music, -1);

		}
		
		return 1;//for success
	}
	
	bool load_sound_effect(const string& path, int repetition = 0) {
		sound_affect = Mix_LoadWAV(path.c_str());
		if (sound_affect == NULL) {
			cerr << "failed to load the sound effect music " << Mix_GetError() << endl;
		}
		else {
			Mix_PlayChannel(-1, sound_affect, repetition);
		}
		return 1;//for success
	}

};
