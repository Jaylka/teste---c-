#include <stdio.h>

int main(){
    /*Implicita: pode causar perda de dados
    
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //"a" é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);
    */
    //Explicita: permite +controle
    int a = 10;
    int b = 3;      //(float): casting que força o valor da variável
    float quociente = (float) a / b;  //"a" explicitamente convertido para float

    printf("Quociente: %.2f\n", quociente);

}