#include <stdio.h>

void derivada(double*, int);

int main(void) {
    int g;
    scanf("%d",&g);
    int expoente = g;
    double vetor[g+1];
    for (int i = 0; i <= g; i++) {
        scanf("%lf",&vetor[i]);
    }
    derivada(vetor,g);

    for (int i = 0; i <= g; i++){
        expoente --;
        printf("%.0lf",vetor[i]);
        if ((expoente != 0) && (expoente !=1)){
            printf("x^");
            printf("%.0d+",expoente);
        }
        else if (expoente == 1){
            printf("x+");
        }
        else break;
    }return 0;
}

void derivada(double* vetor, int grau) {
    int expoente = grau;

    for(int i = 0; i <= grau; i++) {
        vetor[i] = vetor[i]*expoente;
        expoente --;
    }
}
