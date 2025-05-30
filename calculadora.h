#ifndef CALCULADORA_H
#define CALCULADORA_H

void apresentacao(void);
void menu(void);
int ler_operacao(void);
float ler_numero(const char* mensagem);
float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);
float potenciacao(float a, float b);
float radiciacao(float a);
int verificacao_para_calculos(int operacao, float num1, float num2);
float calcula_resultado(int operacao, float num1, float num2);
void mostrar_resultado(float resultado);

#endif