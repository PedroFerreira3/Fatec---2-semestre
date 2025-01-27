#include <stdio.h>

void hanoi(int N, char, char, char);

int main(void) {
    int N;
    scanf("%d", &N);
    hanoi(N, 'A', 'B', 'C');

    return 0;
}

void hanoi(int discos, char A, char B, char C) {
    if (discos == 1) {
        printf("Mover disco %d do pino %c para pino %c\n", discos,A,B);
    }else {
        hanoi(discos - 1, A, C, B);
        printf("Mover disco %d do pino %c para pino %c\n", discos,A,B);
        hanoi(discos - 1, C, B, A);
    }
}

