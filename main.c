#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    float h = 0;
    for(int i = 1; i <= n; i++){
        h += 1.0/i;
    }
    printf("%.8f\n", h);
    return 0;
}
