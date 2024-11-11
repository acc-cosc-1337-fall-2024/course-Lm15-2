// cpp
#include "tic_tac_toe.h"

// public

bool TicTacToe::game_over()
{
    set_winner();
    if(winner == "O" || winner == "X")
    {
        return true;
    }
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{

    player = first_player;
}
void TicTacToe::mark_board(int position)
{

    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}
string TicTacToe::get_winner()
{
    set_winner();
    return winner;
}

// private

void TicTacToe::clear_board()
{

    for (auto &peg : pegs)
    {
        peg = " ";
    }
}
void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    for (long unsigned int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_columm_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] != " " && pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6])
        {
            winner = pegs[i];
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] != " " && pegs[i * 3] == pegs[i * 3 + 1] && pegs[i * 3] == pegs[i * 3 + 2])
        {
            winner = pegs[i * 3];
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
    {
        winner = pegs[0];
        return true;
    }
    if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6])
    {
        winner = pegs[2];
        return true;
    }
    return false;
}

void TicTacToe::set_winner()
{
    if (check_columm_win() != true && check_row_win() != true && check_diagonal_win() != true)
    {
        winner = "C";
    }
}