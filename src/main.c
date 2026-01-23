#include <stdio.h>

int is_even(int numero){
    if(numero % 2 == 0){ //determina si al ser dividido entre dos no de resuido
        return 1; //verdadero, no da resuido
    }
    else{
        return 0; //falso, si da resuido
    }
}

int main(){
    int number; //llamamos la función
    printf("Ingrese un numero:\n");
    scanf("%i", &number);
    if (is_even(number)){
        printf("El numero es par\n");
    }
    else{
        printf("El numero es impar\n");
    }
    return 0;
}