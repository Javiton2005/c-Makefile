#include <stdio.h>
#include <ncurses.h>
void main(){

	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);

	int max_y, max_x;
	
	getmaxyx(stdscr, max_y, max_x);

    	// Imprimir un mensaje centrado
    	mvprintw(max_y/2, (max_x-20)/2, "Bienvenido a ncurses!");

	// Refrescar la pantalla
	refresh();

	// Esperar una tecla
	getch();

	// Finalizar ncurses
	endwin();
		
}

