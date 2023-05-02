#include <stdio.h>
#include <math.h>

int main() {
    float vetor1[10], vetor2[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%f", &vetor1[i]);
        vetor2[i] = pow(vetor1[i], 2);
    }
    printf("Vetor 1: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor1[i]);
    }
    printf("\nVetor 2: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor2[i]);
    }
    return 0;
}
