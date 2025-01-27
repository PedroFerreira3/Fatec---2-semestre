#include <stdio.h>

int main() {
    int n;
    long double e=0, fat=1;
    scanf("%d",&n);
    if(n<0 || n>100000) {
        return 0;
    }else {
        for(int i = 0; i <= n; i++) {
            if(i>1.0)
                fat *= i;

            e += (1.0/fat);
        }
        printf("%.16Lf\n",e);
        return 0;
    }

}
