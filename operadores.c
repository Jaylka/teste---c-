#include <stdio.h>

int main(){
    /*
    soma (+)
    Subtração (-)
    Multiplicação(*)
    Divisão (/)
    */
    
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    printf("*********Calculadora Digital*********\n");
    printf("Digite o PRIMEIRO número:\n");
    scanf("%d", &numero1);  
    printf("Digite o SEGUNDO número:\n");
    scanf("%d", &numero2);

    //Funções das operações
    soma = numero1 + numero2;
    //operação soma
    subtracao = numero1 - numero2;
    //operação subtração
    multiplicacao = numero1 * numero2;
    //operação multiplicação
    divisao = numero1 / numero2;
    // operação divisão

    printf("O resultado da Soma é: %d\n", soma);
    printf("O resultado da subtração é: %d\n", subtracao);
    printf("O resultado da Multiplicação é: %d\n", multiplicacao);
    printf("O resultado da Divisão é: %d\n", divisao);






}
