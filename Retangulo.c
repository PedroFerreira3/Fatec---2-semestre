#include <math.h>
#include <stdio.h>

void dentro_ret (int x0, int y0, int x1, int y1, int x, int y);

int main() {
    int x0, y0, x1, y1, x, y, l;
    scanf("%d %d %d %d %d %d", &x0, &y0, &x1, &y1, &x, &y);
    if (x0>x1){
        l=x0;
        x0=x1;
        x1=l;
    }
    dentro_ret(x0, y0, x1, y1, x, y);

    return 0;
}

void dentro_ret (int x0, int y0, int x1, int y1, int x, int y) {
    if ((x0<=x) && (y0<=y) && (x1>=x) && (y1>=y))
        printf("INTERNO\n");
    else
        printf("EXTERNO\n");
}
