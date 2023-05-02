#include <stdio.h>

int main() {
  int vetor[10], maior, pos_maior;

  // Leitura dos valores e armazenamento no vetor
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número inteiro: ", i+1);
    scanf("%d", &vetor[i]);
  }

  // Impressão do vetor
  printf("\nVetor: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }

  // Busca pelo maior elemento e sua posição
  maior = vetor[0];
  pos_maior = 0;
  for (int i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
      pos_maior = i;
    }
  }

  // Impressão do maior elemento e sua posição
  printf("\nMaior elemento: %d\n", maior);
  printf("Posição do maior elemento: %d\n", pos_maior);

  return 0;
}
