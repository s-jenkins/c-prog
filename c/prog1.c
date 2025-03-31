#include <stdio.h>
char BLANK[] = "       ";
char TAKEN[] = "taken! "; 
char WRONG[] = "wrong! ";

const char HELP[] = "-------\n 0 1 2\n 3 4 5\n 6 7 8\n-------\n\n";
int grid[9];

// -------------------------------
void showGrid() {
    printf("-------");
    for (int i=0; i < 9; i++) {
        int n = grid[i];
        if (i%3==0) printf("\n");
        char sym = n==0 ? 'O' : (n==1 ? 'X' : '.');
        printf(" %c", sym);
    }
    printf("\n-------");
}

// --------------------------------
void move(int turn) { 
    int n;
    char *msg = BLANK;
    printf("\n");
    while (0==0) {
        printf("%s move > ", msg);
        scanf("%i,", &n); 
        if( grid[n] == -1 ) {
            grid[n] = turn;
            break;
        }
        if( grid[n] > 8 || grid[n] < 0 ) msg = WRONG; else msg = TAKEN;

    }
}

int checkWin() {


    return 0;
}

int main() {
    for (int i=0; i<9; i++) grid[i]=-1;
    int turn = 0;
    int n = 0;
    printf("%s", HELP);
    showGrid();

    while (n!=9) {
        move(turn);
        showGrid();
        n++;
        turn = turn * -1 + 1;
    }
    printf("\n");
}


