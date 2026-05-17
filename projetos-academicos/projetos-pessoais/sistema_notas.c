#include <stdio.h>

int main() {
    int quantidade, i;
    
    printf("Quantos alunos? ");
    scanf("%d", &quantidade);

    float notas[quantidade];
    float soma = 0, media;

    // entrada das notas
    for(i = 0; i < quantidade; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // cálculo da média
    media = soma / quantidade;

    printf("\nMedia da turma: %.2f\n", media);

    // mostrar situação de cada aluno
    for(i = 0; i < quantidade; i++) {
        printf("Aluno %d: %.2f - ", i + 1, notas[i]);

        if(notas[i] >= 7) {
            printf("Aprovado\n");
        } else if(notas[i] >= 5) {
            printf("Recuperacao\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
