#include <stdio.h>

int main() {
    float vetor[10], soma_positivos = 0.0;
    int i, negativos = 0;

    // preencher o vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }

    // calcular quantidade de números negativos e soma dos positivos
    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    // mostrar resultados
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}
