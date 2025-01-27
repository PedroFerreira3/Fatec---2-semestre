#include <stdio.h>
#include <math.h>

double poli(double*, int, double);

int main() {
    int g;
    double x, resultado;

    scanf("%d %lf", &g, &x);

    int expoente = g;
    double vet[expoente + 1];

    for (int i = 0; i <= g; i++)
        scanf("%lf", &vet[i]);

    resultado = poli(vet, g, x);
    printf("%.2f\n", resultado);

    return 0;
}

double poli(double* vet, int grau, double x) {
    double resultado = 0;
    int expoente = grau;

    for (int i = 0; i <= grau; i++) {
        resultado = resultado + (vet[i]) * pow(x, expoente);
        expoente--;
    }

    return resultado;
}
