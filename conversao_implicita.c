#include <stdio.h>

int main(){
    /*Implicita
    
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //"a" é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);
    */
    //Explicita
    int a = 10;
    int b = 3;
    float quociente = (float) a / b;  //"a" explicitamente convertido para float

    printf("Quociente: %.2f\n", quociente);

}