#include <stdio.h>

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
    printf("\n");
    while (0==0) {
        printf(" move > ");
        scanf("%i,", &n); 
        if( grid[n] == -1 ) {
            grid[n] = turn;
            break;
        }
    }
}

int main() {
    for (int i=0; i<9; i++) grid[i]=-1;
    int turn = 0;
    printf("%s", HELP);
    showGrid();
    move(0);
    showGrid();
    move(1);
    showGrid();

    printf("\n");
}


