// h
#include <iostream>
#include <string>
#include <vector>
#include<memory>
using std::string; using std::cout; using std::cin; using std::vector; using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe
{

public:
    TicTacToe(int size) : pegs(size * size, " ") {}
    TicTacToe();
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player; }
    void display_board() const;
    string get_winner();
    string winner;
    

protected: 
    vector<string> pegs;
    virtual bool check_column_win();    
    virtual bool check_row_win();       
    virtual bool check_diagonal_win();

private:
    string player;
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full();
    
};

#endif