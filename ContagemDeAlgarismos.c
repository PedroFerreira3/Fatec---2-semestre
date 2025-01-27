#include <stdio.h>
#include <string.h>

int main() {
    long long int N;
    char n[1001];
    long long int contagem[10] = {0};
    scanf("%lld", &N);

    for (long long int i = 0; i < N; i++) {
        scanf("%s", n);
        if (n[0] == '-') {
            continue;
        }
        for (int j = 0; j < strlen(n); j++) {
            int digito = n[j] - '0';
            contagem[digito]++;
        }
    }
    for (int j = 0; j < 10; j++) {
        printf("%d - %lld\n", j, contagem[j]);
    }
    return 0;
}
