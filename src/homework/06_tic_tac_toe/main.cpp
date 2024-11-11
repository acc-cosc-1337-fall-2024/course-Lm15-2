#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
int main()
{
	TicTacToe game;
	TicTacToeManager gameManager;
	int xWins = 0;
	int oWins = 0;
	int ties = 0;

	string first_player;
	char choice = 'y';
	do
	{
		cout << "Enter first player: ";
		cin >> first_player;

		game.start_game(first_player);

		int position;

		while (!game.game_over())
		{
			cout << "Enter a position: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
			if (game.game_over() == true)
			{
				if (game.get_winner() != "C")
				{
					cout << "The winner is: " << game.get_winner() << "\n";
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
		cout<<"\nWins for X: "<<xWins<<"\nWins for O: "<<oWins<<"\nNumber of ties: "<<ties<<"\n";

	} while (choice == 'y' || choice == 'Y');

	return 0;
}