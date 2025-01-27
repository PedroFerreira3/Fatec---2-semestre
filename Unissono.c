#include <stdio.h>

int main() {
    int n, qtd, i, j, index;

    char *versos[] = {
        "Mors fures sunt",
        "Fures ova lac filio meo",
        "Ad secessum emittitur",
        "Fures omnes perdant",
        "Infernum manet",
        "Exitium sua quemvis maneat"
    };

    int identificadores[6];

    scanf("%d %d", &n, &qtd);
    if (n == 1) {
        for (i = 0; i < qtd; i++) {
            printf("%s\n", versos[0]);
        }
    }
    else {
        for (i = 0; i < qtd; i++) {
            scanf("%d", &identificadores[i]);
        }

        for (i = 0; i < n; i++) {
            index = identificadores[i % qtd] - 1;
            printf("%s\n", versos[index]);
        }
    }


    return 0;
}
