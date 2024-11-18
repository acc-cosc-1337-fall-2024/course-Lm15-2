// cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &game)
{
    games.push_back(make_unique<TicTacToe>(game));

    string win = game->get_winner();
    update_winner_count(win);
}

void TicTacToeManager::get_winner_total(int &o, int &w, int &t)
{
    o = o_win;
    w = x_win;
    t = ties;
}
void TicTacToeManager::display_games()
{
    for (auto &game : games)
    {
        (*game).display_board();
    }
}
void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "C")
    {
        ties++;
    }
    else if (winner == "X")
    {
        x_win++;
    }
    else
    {
        o_win++;
    }
}
