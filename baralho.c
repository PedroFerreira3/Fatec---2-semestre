#include <stdio.h>

int main(){
    int P, n = 2, contador = 1;
    scanf("%d",&P);
    if (P < 2 || P > 200000)
        return 0;
    else{
        while(n != 1){
            if(n <= (P/2))
                n += n;
            else
                n -= (P - n + 1);
            contador++;
        }

        printf("%d\n",contador);
    }

    return 1;
}