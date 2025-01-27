#include <stdio.h>

int main() {
    int p, q, r;

    scanf("%d %d", &p, &q);

    int A[p][q];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &q, &r);

    double B[q][r];

    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    double C[p][r];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%.0lf\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
