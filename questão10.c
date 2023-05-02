#include <stdio.h>

int main() {
  float notas[15], soma = 0;

  // Leitura das notas e armazenamento no vetor
  for (int i = 0; i < 15; i++) {
    printf("Digite a nota do %dº aluno: ", i+1);
    scanf("%f", &notas
