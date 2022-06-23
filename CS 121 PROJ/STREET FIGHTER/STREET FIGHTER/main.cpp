#include <iostream>
#include <string>
#include <vector>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include "Fighters.h"
using namespace std;

const int fps = 60;

//state = 0 means the game is in main menu
//state =1 means the game is started

Fighters game;

void capfps(Uint32 starting_tick);

bool check_if_both_players_selected(SDL_Event event, int state) {
    if (state == 0) {
        if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_1) {
                game.flag[0] = true;
                game.flag[1] = false;
                game.player_selected[0] = "lori";
            }
            else if (event.key.keysym.sym == SDLK_2) {
                game.flag[1] = true;
                game.flag[0] = false;
                game.player_selected[0] = "sub-zero";
            }
            else if (event.key.keysym.sym == SDLK_8) {
                game.player_selected[1] = "ryo";
                game.flag[2] = true;
                game.flag[3] = false;
            }
            else if (event.key.keysym.sym == SDLK_9) {
                game.player_selected[1] = "scorpio";
                game.flag[3] = true;
                game.flag[2] = false;
            }
        }

        //checking if both players are selected
        if (game.flag[0] == true || game.flag[1] == true) {
            game.first_player_selected = true;
        }
        if (game.flag[2] == true || game.flag[3] == true) {
            game.second_player_selected = true;
        }

        if (game.first_player_selected == true && game.second_player_selected == true &&
            event.key.keysym.sym == 13) {
            game.both_player_selected = true;
        }
    }
    return game.both_player_selected;
}

int main(int argc, char** argv) {

    int ticks_for_caping_fps = 0;
    
    game.initialze();
    
    do {
        game.is_running = true;

        while (game.is_running) {
            ticks_for_caping_fps = SDL_GetTicks();

            while (SDL_PollEvent(&game.main_event)) {

                if (game.main_event.type == SDL_QUIT) {
                    
                    game.is_running = false;// some flags that tell me what has happened or changed
                    
                    game.again = false;
                    
                    break;
                }

                //check if both players are selected
                check_if_both_players_selected(game.main_event,game.state);//checking if both the players are selected

                if (game.main_event.type == SDL_KEYDOWN) {

                    if (game.both_player_selected == true && game.sound_flag == false) {//only if both theplayer are selected only then allow the user to start the game

                        switch (game.main_event.key.keysym.sym) {
                            //if user wants to start the game
                        case 13://enter key numeric code

                            game.state = 1;

                            game.load_background_music(game.state );
                            game.load_sound_effect("sounds/fight.mp3", 0);

                            game.player1.create_player(game.player_selected[0], game.grender);
                            game.player2.create_player(game.player_selected[1], game.grender);

                            game.sound_flag = true;
                        }
                        break;
                    }
                }
                game.player1.handleEvent(game.main_event,game.keys,game.up_key,game.down_key,game.left_key,game.right_key);//handle the key preses of player 1
                game.player2.handleEvent(game.main_event,game.keys, game.up_key, game.down_key, game.left_key, game.right_key);//handle the key preses of player 2
            }

            SDL_SetRenderDrawColor(game.grender, 255, 255, 255, 255);
            SDL_RenderClear(game.grender);

            game.load_main_menu(game.main_event);//loading the main maenu of the game

            game.start_game();//starting the game

            game.won_check();//checking if anybody won

            SDL_RenderPresent(game.grender);//presenting each and every render
            
            capfps(ticks_for_caping_fps);//fps would not go higher than 60
            
        }

    } while (game.again);//wanna play again

    game.close();


    return 0;
}

void capfps(Uint32 starting_tick) {
    if ((1000 / fps) > (SDL_GetTicks() - starting_tick)) {
        SDL_Delay(1000 / fps - (SDL_GetTicks() - starting_tick));
    }
}






