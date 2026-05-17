#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    int opcao;
    float num1, num2;

    printf("=== Calculadora Simples ===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            printf("Resultado: %.2f\n", somar(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrair(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplicar(num1, num2));
            break;
        case 4:
            printf("Resultado: %.2f\n", dividir(num1, num2));
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
