#include <ncurses.h>
#include <stdlib.h>


int main(void){
	int x = 10, y = 10;
	int key;
	int w, h;
	char * lt = "d^))";
	char * rt = "(( ^b";
	char * dn = "(^o^)";
	char * up = "((*))";
	char * face = "(^o^)";
	int size = 5;
	int score = 0;
	char * flag = "__P__";
	int f = 0;
	int fx, fy;
	
	initscr();
	noecho();
	curs_set(0);
	getmaxyx(stdscr, h, w);
	while(1){
		erase();
		move(0, 0);
		printw("Score: %d", score);
		if (f == 0) {
			fx = rand() % 20;
			fy = rand() % 20;
			f = 1;
		}
		move(fy, fx);
		printw(flag);
		move(y, x);
		printw(face);
		key = getch();

		switch(key){
			case 'h' : x--; face =lt; break;
			case 'j' : y++; face =dn; break;
			case 'k' : y--; face =up; break;
			case 'l' : x++; face =rt; break;
		}
		if(key == 'q') break;

		if(x < 0) x = 0;
		else if (x + size > w) x = w - size;
		if(y < 0) y = 0;
		else if (y > h) y = h - 1;

		if((x == fx) && (y == fy)) {
			f = 0;
			score++;
		}
				
	}
	endwin();
	return 0;
}

