#include <stdio.h>

int area(int side){    
    int a = side * side; /*El flotante llega hasta un determinado número*/
    return a;
}

int volume(int side){    
    int v = side * side * side;
    return v;
}

int main(){
    int side = 0;
    
    printf("Enter the side lenght:");
    scanf("%i", &side);

    int a = area(side);
    int v = volume(side);
    
    printf("Square area: %i\n", a);
    printf("Cube volume: %i\n",v);
    
    return 0;
}