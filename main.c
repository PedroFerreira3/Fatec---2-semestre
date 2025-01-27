#include <stdio.h>

void xadrez(int, int);

int main(void) {
    int N, G;

    scanf("%d %d", &N, &G);
    printf("P2\n");
    printf("%d\t%d\n", N*8,N*8);
    printf("%d\n",G);
    xadrez(N, G);
    return 0;
}

void xadrez(int N, int G) {
    int linha, coluna;
    for (linha = 1; linha <= (8*N); linha++) {
        if ((linha <= N) || (linha >(2*N) && linha <= (3*N)) || (linha > (4*N) && linha <= (5*N)) || (linha > (6*N) && linha <= (7*N))) {
            for (coluna = 1; coluna <= (8*N); coluna++) {
                if ((coluna <= N) || (coluna >(2*N) && coluna <= (3*N)) || (coluna > (4*N) && coluna <= (5*N)) || (coluna > (6*N) && coluna <= (7*N)))
                    printf("%d\t", G);
                else
                    printf("0\t");

            }
        }else {
            for (coluna = 1; coluna <= (8*N); coluna++) {
                if ((coluna <= N) || (coluna >(2*N) && coluna <= (3*N)) || (coluna > (4*N) && coluna <= (5*N)) || (coluna > (6*N) && coluna <= (7*N)))
                    printf("0\t");
                else
                    printf("%d\t",G);

            }
        }
        printf("\n");
    }
}