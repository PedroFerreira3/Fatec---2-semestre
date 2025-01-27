#include <stdio.h>

int main(){
    int N, painel=0;
    scanf("%d",&N);
    char letra[N];
    scanf("%s",&letra);

    for(int i=0;i<N;i++) {
        if(letra[i]=='P'){
            painel+=2;
        }else if(letra[i]=='C') {
            painel+=2;
        }if(letra[i]=='A') {
            painel+=1;
        }
    }printf("%d",painel);

    return 0;

}