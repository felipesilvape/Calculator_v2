# Calculadora em C

Este projeto é uma calculadora simples desenvolvida em linguagem C para fins acadêmicos. Ela permite realizar operações matemáticas básicas como adição, subtração, multiplicação, divisão, potenciação e radiciação, com validação de entrada e tratamento de erros comuns.

## Funcionalidades

- **Adição**
- **Subtração**
- **Multiplicação**
- **Divisão** (com verificação de divisão por zero)
- **Potenciação**
- **Radiciação** (com verificação para números negativos)

## Estrutura do Projeto

- `main.c` — Função principal e controle do fluxo do programa.
- `calculadora.c` — Implementação das funções de cálculo, entrada, saída e validação.
- `calculadora.h` — Arquivo de cabeçalho com as declarações das funções.

## Como compilar e executar

1. **Abra o terminal na pasta do projeto.**
2. **Compile o projeto com:**
   ```
   gcc main.c calculadora.c -o calculadora.exe -lm
   ```
   O parâmetro `-lm` é necessário para linkar a biblioteca matemática.

3. **Execute o programa:**
   ```
   ./calculadora.exe
   ```
   ou no Windows PowerShell:
   ```
   .\calculadora.exe
   ```

## Uso

- O programa exibe um menu com as operações disponíveis.
- O usuário escolhe a operação e informa os números.
- O resultado é exibido na tela.
- Após cada cálculo, é possível realizar um novo cálculo ou encerrar o programa.

## Exemplo de uso

```
=======================
 C A L C U L A D O R A 
=======================
Version: 2.0         
Created by: Felipe   
Pressione Enter para continuar...

Operacoes disponiveis. 
 1 - Adicao            
 2 - Subtracao         
 3 - Multiplicacao     
 4 - Divisao           
 5 - Potenciacao       
 6 - Radiciacao        
Informe a operacao que deseja realizar (1-6): 4
Informe os numeros que serao utilizados.
Primeiro numero: 10
Segundo numero: 2
O resultado e: 5.000
Deseja realizar um novo calculo? (S- sim / N- nao)
```

## Observações

- O código está modularizado e segue boas práticas para projetos acadêmicos.
- Entradas inválidas são tratadas e o usuário é orientado a tentar novamente.
- O projeto pode ser expandido facilmente para incluir novas operações.

---

**Desenvolvido por:** Felipe  
**Versão:** 2.0
