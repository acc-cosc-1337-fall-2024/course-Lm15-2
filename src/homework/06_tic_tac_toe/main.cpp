#include "tic_tac_toe.h"
int main()
{
	TicTacToe game;

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
				}
				else
				{
					cout << "No winner \n";
				}
			}
		}

		cout << "Enter y or Y to play again ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}