#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
int main()
{
	unique_ptr<TicTacToe> game;
	TicTacToeManager gameManager;
	int xWins = 0;
	int oWins = 0;
	int ties = 0;	

	string first_player;
	char choice = 'y';
	int board_size;
	do
	{
		cout << "What size board do you wish to play on 3 or 4?: ";
		cin >> board_size;

		if (board_size == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else if (board_size == 4)
		{
			game = make_unique<TicTacToe4>();
		}
		else
		{
			cout << "Invalid Please select either 3 or 4. \n";
		}
		cout << "Enter first player: ";
		cin >> first_player;

		game->start_game(first_player);

		int position;

		while (!game->game_over())
		{
			cout << "Enter a position: ";
			cin >> position;
			game->mark_board(position);
			game->display_board();
			if (game->game_over() == true)
			{
				if (game->get_winner() != "C")
				{
					cout << "The winner is: " << game->get_winner() << "\n";
					gameManager.save_game(game);
				}
				else
				{
					cout << "No winner \n";
					gameManager.save_game(game);
				}
			}
			gameManager.get_winner_total(oWins, xWins, ties);
		}

		cout << "Enter y or Y to play again ";
		cin >> choice;
		cout << "\nWins for X: " << xWins << "\nWins for O: " << oWins << "\nNumber of ties: " << ties << "\n";

	} while (choice == 'y' || choice == 'Y');

	return 0;
}