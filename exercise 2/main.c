/*Name:Kaveh Masoudinia
Section 8 Exercise 2
Date:12/09/2021(1400/09/18)*/
#include <stdio.h>
#include <string.h>
#define ROW 8
#define COLUMN 8
void printMaze(char maze[ROW][COLUMN]) {

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}
int FP(char maze[ROW][COLUMN], int x, int y) {

    maze[x][y] = 'K';

    if (x == ROW - 1 && y == COLUMN - 1) {
        return 1;
    }
    if (x + 1 < ROW && maze[x + 1][y] == ' ') {
        if (FP(maze, x + 1, y)) {
            return 1;
        }
    }
    if (x - 1 >= 0 && maze[x - 1][y] == ' ') {
        if (FP(maze, x - 1, y)) {
            return 1;
        }
    }
    if (y + 1 < COLUMN && maze[x][y + 1] == ' ') {
        if (FP(maze, x, y + 1)) {
            return 1;
        }
    }
    if (y - 1 >= 0 && maze[x][y - 1] == ' ') {
        if (FP(maze, x, y - 1)) {
            return 1;
        }
    }
    maze[x][y] = ' ';
    return 0;
}
int main(void) {

    char maze[ROW][COLUMN] = {
            {'x',' ', 'x', 'x', 'x', 'x', 'x', 'x'},
            {'x',' ', ' ', 'x', 'x', 'x', 'x', 'x'},
            {'x','x', ' ', 'x', 'x', 'x', 'x', 'x'},
            {'x','x', ' ', ' ', ' ', 'x', 'x', 'x'},
            {'x','x', 'x', 'x', ' ', 'x', 'x', 'x'},
            {'x','x', 'x', ' ', ' ', 'x', 'x', 'x'},
            {'x','x', 'x', ' ', 'x', 'x', 'x', 'x'},
            {'x','x', 'x', ' ', ' ', ' ', ' ', ' '},
    };
    printMaze(maze);

    if (FP(maze, 0, 0)) {
        printf("Maze completed!\n");
        printMaze(maze);
    } else {
        printf("No path found!");
    }
    return 0;
}