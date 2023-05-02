#include <stdio.h>

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0], menor = vetor[0];
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior =
