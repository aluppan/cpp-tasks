#include <iostream>
#include <random>

using namespace std;

enum keys_move {
	press_up = 'w',
	press_down = 's',
	press_left = 'a',
	press_right = 'd'
};

void move(char[4][4], const keys_move);

void clr()
{
	for (int i = 0; i < 50; i++)
	{
		cout << endl;
	}
}

void initialize_board(char board[4][4])
{
	const char board_list[4][4] = {
			{'1', '2', '3', '4'},
			{'5', '6', '7', '8'},
			{'9', 'A', 'B', 'C'},
			{'D', 'E', 'F', ' '}
	};
	for (int ryad = 0; ryad < 4; ++ryad) 
	{
		for (int polos = 0; polos < 4; ++polos) 
		{
			board[ryad][polos] = board_list[ryad][polos];
		}
	}
}

void print_board(char board[4][4])
{
	for (int ryad = 0; ryad < 4; ++ryad) 
	{
		for (int polos = 0; polos < 4; ++polos) 
		{
			cout << board[ryad][polos];
		}
		cout << endl;
	}
}

void check_locate(int& check_ryad, int& check_polos, char board[4][4])
{
	for (int ryad = 0; ryad < 4; ++ryad) 
	{
		for (int polos = 0; polos < 4; ++polos) 
		{
			if (board[ryad][polos] == ' ')
			{
				check_ryad = ryad;
				check_polos = polos;
			}
		}
	}
}

void randomize(char board[4][4])
{
	srand(time(nullptr));
	for (int i = 0; i < 1000000; ++i) 
	{
		const int r_next_move = (rand() % 4);
		switch (r_next_move) 
		{
		case 0:
		{
			move(board, press_up);
			break;
		}
		case 1:
		{
			move(board, press_down);
			break;
		}
		case 2:
		{
			move(board, press_left);
			break;
		}
		case 3:
		{
			move(board, press_right);
			break;
		}
		}
	}
}

void move(char board[4][4], const keys_move ke_move)
{
	int ryad_space;
	int polos_space;
	check_locate(ryad_space, polos_space, board);
	int ryad_move(ryad_space);
	int polos_move(polos_space);
	switch (ke_move) 
	{
	case press_up:
	{
		ryad_move = ryad_space + 1;
		break;
	}
	case press_down:
	{
		ryad_move = ryad_space - 1;
		break;
	}
	case press_left:
	{
		polos_move = polos_space + 1;
		break;
	}
	case press_right:
	{
		polos_move = polos_space - 1;
		break;
	}
	}
	if (ryad_move >= 0 && ryad_move < 4 && polos_move >= 0 && polos_move < 4) 
	{
		board[ryad_space][polos_space] = board[ryad_move][polos_move];
		board[ryad_move][polos_move] = ' ';
	}
}

int main() 
{
	setlocale(LC_ALL, "ru");

	char board[4][4];
	initialize_board(board);
	randomize(board);
	do {
		cout << "Подсказка: A = 10, B = 11, C = 12, D = 13, E = 14, F = 15\n" << endl;
		print_board(board);
		cout << endl << "w = Вверх, s = Вниз, a = Влево, d = Вправо " << endl;
		char you_next_move;
		cout << "Нажать -> ";
		cin >> you_next_move;
		keys_move keys_next_move = (keys_move)you_next_move;
		move(board, keys_next_move);
		clr();
		cout << endl;
	} while (true);

	return 0;
}

