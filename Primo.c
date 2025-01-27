#include <stdio.h>
#include <math.h>

void primo(int n);

int main() {
    int n;
    scanf("%d", &n);
    primo(n);
    return 0;
}

void primo(int n) {
    if (n < 2) {
        printf("!PRIMO\n");
        return;
    }

    int contador = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            contador++;
            if (i != n / i)
                contador++;
        }
    }

    if (contador == 2)
        printf("PRIMO\n");
    else
        printf("!PRIMO\n");
}
