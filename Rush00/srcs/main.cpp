#include <ncurses.h>
#include <iostream>
#include "../includes/map.hpp"
#include "../includes/player.hpp"
#include "../includes/bullet.hpp"
#include "../includes/enemy.hpp"
#include <unistd.h>

void	updatebullets(bullet *cartridge)
{
	int i = 0;
	while (cartridge[i].getPos_x() > 0)
	{
		cartridge[i].update();
		i++;
	}
}

void	check_window_size()
{
	int	i;
	int j;

	getmaxyx(stdscr, i, j);
	while (i < 50 || j < 200)
	{
		clear();
		getmaxyx(stdscr, i, j);
		mvprintw((LINES / 2) + 2, COLS / 2, "Window needs to be at least 50 chars high and 200 chars long");
		mvprintw(LINES / 2, COLS / 2, "Window size is: %d x %d", j, i);
		refresh();
	}
	clear();
}


int main() 
{
	int			ch;
	int			x;
	int			y;
	map 		game_map;
	player		player1;
	std::string	name;
	// bool		bul = false;

	ch = 0;
	while (1) 
	{
		check_window_size();
		clear();
		game_map.draw_map();
		game_map.intro(ch);
		x = 0;
		y = LINES / 2;
		while (ch != 'q' && ch != 'Q')
		{
			check_window_size();
			game_map.draw_map();
			ch = getch();
			updatebullets(player1.getCartridge());
			player1.move(ch);
			usleep(10000);
		}
	}
	endwin();
	return 0;
}
