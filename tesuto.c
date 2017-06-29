#include <ncurses.h>
#include <stdio.h>
// #include "monster.h"
int init() {
}


int game_loop() {
    initscr();
    clear();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);

    int coords[2]; 
    coords[0] = 10;
    coords[1] = 10; 

    printw("Hello world");

    getch();
    clear();
    bool done = false;
    
    mvaddch(coords[1], coords[0], '@');
    while (!done) {
        switch (getch()) {
            case 'h':
                mvaddch(coords[1], coords[0], ' ');
                coords[0]--;
                mvaddch(coords[1], coords[0], '@');
                break;
            case 'l':
                mvaddch(coords[1], coords[0], ' ');
                coords[0]++;
                mvaddch(coords[1], coords[0], '@');
                break;
            case 'j':
                mvaddch(coords[1], coords[0], ' ');
                coords[1]++;
                mvaddch(coords[1], coords[0], '@');
                break;
            case 'k':
                mvaddch(coords[1], coords[0], ' ');
                coords[1]--;
                mvaddch(coords[1], coords[0], '@');
                break;
            case 'q':
                done = true;
            default:
                break;

        }
    }

    return 1;
}


int main() {
    curs_set(1);
    clear();
    game_loop();
    endwin();
    printf("Thank you for playing!\n");
    return 0;
}
