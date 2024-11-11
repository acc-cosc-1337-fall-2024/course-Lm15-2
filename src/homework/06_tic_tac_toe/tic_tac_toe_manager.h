//h
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "tic_tac_toe.h"

using std::string; using std::cout; using std::cin; using std::vector; using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager : public TicTacToe{


    public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int&t);

    private:
    vector<unique_ptr<TicTacToe>> games;
    void update_winner_count(string winner);

        int x_win = 0;
	    int o_win = 0;
	    int ties = 0;
    
};

#endif