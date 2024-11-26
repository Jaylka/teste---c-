#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;
    //Incremento
    printf("Antes Incremento: %d\n",numero1);
    // numero1 = numero1 + 1;
    // numero1 += 1 (atribuição)
    // Pós-incremento:
    //resultado = numero1;  // atribuio valor, depois o incremento
    //numero1++;
    resultado = numero1++,
    //printf("Após incremento: %d\n", numero1);
    printf("Apos Pós-Icremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);    //Decremento
    

    //Pré-Incremento
    resultado = ++numero1,
    
    
    //printf("Após incremento: %d\n", numero1);
    printf("Apos Pré-Icremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);    
    //numero1 -= 1(atribuição)
    //numero1 = numero1 - 1;
    numero1--,
    printf("Após Decremento: %d\n", numero1);




}