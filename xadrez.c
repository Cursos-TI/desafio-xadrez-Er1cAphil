#include <stdio.h>

const int BOARD_SIZE = 8;

void moveBispo(int x, int y) {
    int step = 1;
    while (x + step < BOARD_SIZE && y + step < BOARD_SIZE) {
        printf("Bispo move para (%d, %d)\n", x + step, y + step);
        step++;
    }
}

void moveRainha(int x, int y) {
    int i = x - 1;
    while (i >= 0) {
        printf("Rainha move para (%d, %d)\n", i, y);
        i--;
    }
}

void moveCavalo(int x, int y) {
    int moves[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    for (int i = 0; i < 8; i++) {
        int newX = x + moves[i][0];
        int newY = y + moves[i][1];
        if (newX >= 0 && newX < BOARD_SIZE && newY >= 0 && newY < BOARD_SIZE) {
            printf("Cavalo move para (%d, %d)\n", newX, newY);
        }
    }
}

int main() {
    printf("Movimentacoes do Bispo:\n");
    moveBispo(3, 3);
    
    printf("\nMovimentacoes da Rainha:\n");
    moveRainha(3, 3);
    
    printf("\nMovimentacoes do Cavalo:\n");
    moveCavalo(3, 3);
    
    return 0;
}
