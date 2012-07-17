//
// nc01.c
// ncurses_example
//

#include <ncurses.h>

int main()
{	initscr();				// Start curses mode
	mvaddstr(10, 10, "Hello");		// put Hello at (10, 10)
	refresh();
	getch();
	endwin();
	return 0;
}
