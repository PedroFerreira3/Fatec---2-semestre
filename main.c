#include <stdio.h>

unsigned long long int fibonacci( long long int n);

int main(void){
    unsigned long long int n;
        scanf("%llu", &n);
        printf("%llu", fibonacci(n));
    return 0;
}

unsigned long long int fibonacci(long long int n) {
       unsigned long long int ultimo = 1, penultimo = 0, resultado=0;

        for(int i = 1; i <= n; i++) {

            resultado = ultimo + penultimo;

            if(i<=2) {
                resultado = 1;
            }

            penultimo = ultimo;
            ultimo = resultado;
            }
            return resultado;
}
