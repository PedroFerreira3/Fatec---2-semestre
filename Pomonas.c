#include <stdio.h>

int main(void) {
    int x, m, fim;
    scanf("%d %d", &x, &m);
    for (int i = 0; i <= 30; i++) {
        if (x % m == 0)
            fim = 1;
        else {
            x = x + (x%m);
            fim = 0;
        }
    }
    if (fim == 0)
        printf("NONSTOP\n");
    else
        printf("STOP\n");
    return 0;
}
