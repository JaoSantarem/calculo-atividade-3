#include <stdio.h>

/* A atividade nao define f(2). Os valores usados abaixo sao diferentes de 2. */
double calcular(double x) {
    if (x < 2) {
        return x + 1;
    } else {
        return x + 4;
    }
}

int main(void) {
    double esquerda[4] = {1.9, 1.99, 1.999, 1.9999};
    double direita[4] = {2.0001, 2.001, 2.01, 2.1};
    int i;

    printf("ATIVIDADE 3 - Quando o limite nao existe\n");
    printf("\nPELA ESQUERDA (x < 2)\n");
    printf("x          f(x)\n");
    printf("----------------------\n");
    for (i = 0; i < 4; i++) {
        printf("%.4f     %.4f\n", esquerda[i], calcular(esquerda[i]));
    }

    printf("\nPELA DIREITA (x > 2)\n");
    printf("x          f(x)\n");
    printf("----------------------\n");
    for (i = 0; i < 4; i++) {
        printf("%.4f     %.4f\n", direita[i], calcular(direita[i]));
    }

    printf("\nPela esquerda, f(x) se aproxima de 3.\n");
    printf("Pela direita, f(x) se aproxima de 6.\n");
    printf("Como os limites laterais sao diferentes, o limite nao existe.\n");
    return 0;
}
