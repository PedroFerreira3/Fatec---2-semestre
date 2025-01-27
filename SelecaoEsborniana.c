#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUM_PONTOS 28
#define VELOCIDADE 4.6
#define TEMPO_COLETA 1.0

double calcula_perimetro(double diametro) {
    return M_PI * diametro;
}

double calcula_distancia(double perimetro, int ponto1, int ponto2) {
    double d_ponto = perimetro / NUM_PONTOS;
    int dist = abs(ponto2 - ponto1);
    return fmin(dist, NUM_PONTOS - dist) * d_ponto;
}

int letra_para_ponto(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return letra - 'A';
    } else if (letra == ' ') {
        return 26;
    } else if (letra == '\'') {
        return 27;
    }
    return -1;
}

double calcula_tempo_frase(const char *frase, double perimetro) {
    double tempo_total = 0.0;
    int posicao_atual = letra_para_ponto(frase[0]);

    tempo_total += TEMPO_COLETA;

    for (int i = 1; frase[i] != '\0'; i++) {
        int nova_posicao = letra_para_ponto(frase[i]);
        double distancia = calcula_distancia(perimetro, posicao_atual, nova_posicao);
        tempo_total += (distancia / VELOCIDADE);
        posicao_atual = nova_posicao;
        tempo_total += TEMPO_COLETA;
    }
    return tempo_total;
}

int main() {
    int N;
    scanf("%d\n", &N);
    double diametro = 18.2;
    double perimetro = calcula_perimetro(diametro);

    for (int i = 0; i < N; i++) {
        char frase[121];
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = 0;
        double tempo = calcula_tempo_frase(frase, perimetro);
        printf("%.10f\n", tempo);
    }

    return 0;
}

