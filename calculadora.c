#include <stdio.h>   
#include <stdlib.h>  
#include <math.h>
#include "calculadora.h"

//apenas o estilo da calculadora como um logo
void apresentacao(void) {
    printf("=======================");
    printf(" C A L C U L A D O R A ");
    printf("=======================");
    printf("\n");
    printf("Version: 2.0         \n");
    printf("Created by: Felipe   \n");
    printf("Pressione Enter para continuar...");
    getchar();
}

//pede ao usuário os números e a operação desejada
void menu (void) {
    int operacao, valido = 0;
    float num1, num2 = 0;

    do {
        operacao = ler_operacao();
        printf("Informe os numeros que serao utilizados.\n");
        num1 = ler_numero("Primeiro numero: ");
        if (operacao != 6) {
        num2 = ler_numero("Segundo numero: ");
        }
        valido = verificacao_para_calculos(operacao, num1, num2);
        if (!valido) {
            printf("Tente novamente.\n");
        }
    } while (!valido);

    float resultado = calcula_resultado(operacao, num1, num2);
    mostrar_resultado(resultado);
}


int ler_operacao(void) {
    int operacao;
    int leitura_valida = 0;

    printf("Operacoes disponiveis. \n");
    printf(" 1 - Adicao            \n");
    printf(" 2 - Subtracao         \n");
    printf(" 3 - Multiplicacao     \n");
    printf(" 4 - Divisao           \n");
    printf(" 5 - Potenciacao       \n");
    printf(" 6 - Radiciacao        \n");
    
    while (!leitura_valida) {
        printf("Informe a operacao que deseja realizar (1-6): ");
        if(scanf("%d", &operacao) == 1 && operacao >= 1 && operacao <= 6) {
            leitura_valida = 1;
        } else {
            printf("Entrada invalida! Digite um numero entre 1 e 6.\n");
            while (getchar() != '\n'); //limpa o buffer do teclado
        }
    }
    return operacao;
}


float ler_numero(const char* mensagem) {
    float num;
    int leitura_valida = 0;

    while (!leitura_valida) {
        printf("%s", mensagem);
        if (scanf("%f", &num) == 1) {
            leitura_valida = 1;
        } else {
            printf("Entrada invalida! Tente novamente.\n");
            while (getchar() != '\n'); // Limpa buffer
        }
    }
    return num;
}

//função para os cálculos
float soma(float a, float b) {
    return a + b;
}


float subtracao(float a, float b) {
    return a - b;
}


float multiplicacao(float a, float b) {
    return a * b;
}


float divisao(float a, float b) {
    return a / b;
}


float potenciacao(float a, float b) {
    return pow(a, b); //pow (base, expoente)
}


float radiciacao(float a) {
    return sqrt(a);
}


int verificacao_para_calculos(int operacao, float num1, float num2) {
    if (operacao == 6 && num1 < 0) { //se caso foi escolhida radicacao, verifica se foi escolhido um numero negativo
        printf("Erro: Apenas calcula a raiz de numeros positivos. \n");
        return;
    }
    if (operacao == 4 && num2 == 0) { //se caso foi escolhida divisao, verifica se o denominador é zero
        printf("Erro: Divisao por zero nao permitida.\n");
        return;
    }
    return 0;
}


float calcula_resultado(int operacao, float num1, float num2) {
    switch(operacao) { //decide qual operação deverá ser usada baseada na escolha do usuário
        case 1: return soma(num1, num2); break;
        case 2: return subtracao(num1, num2); break;
        case 3: return multiplicacao(num1, num2); break;
        case 4: return divisao(num1, num2); break;
        case 5: return potenciacao(num1, num2); break;
        case 6: return radiciacao(num1); break;
        default:
            printf("Operacao invalida!\n");
            return 0;
    }
}

//função de saída
void mostrar_resultado(float resultado) {
    printf("O resultado e: %.3f\n", resultado);
}