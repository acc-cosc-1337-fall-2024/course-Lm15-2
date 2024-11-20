//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager{


    public:
    void save_game(unique_ptr<TicTacToe>& game);
    void get_winner_total(int& o, int& w, int&t);
    void display_games();

    private:
    vector<unique_ptr<TicTacToe>> games;
    void update_winner_count(string winner);

        int x_win = 0;
	    int o_win = 0;
	    int ties = 0;
    
};

#endif