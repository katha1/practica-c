#include <stdio.h>
#include <stdint.h>


/*
int main(){
    uint32_t word1 = 0x3275C947;
    uint32_t word2 = 0x5775C94F;

    uint32_t high1 = (word1 >> 29) & 0x7;// Porque 7 es 111 
    uint32_t low2 = word2 & 0x7;

    printf("El mas alto es  %u, el mas bajo es  %u \n", high1, low2);
    
    if (high1 == low2){
        printf("Coinciden!\n");
    } else {
        printf("No coinciden \n");
    }
    return 0;
}


int main(){
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }
    return 0;
}


Ejercicio 11:
Realizar un programa que rote un arreglo de n´umeros enteros a la izquierda. El arreglo
puede estar hardcodeado. Por ejemplo, si el arreglo es [1, 2, 3, 4], el resultado debe
ser [2, 3, 4, 1]. Cuando veamos punteros, podremos hacer una funci´on de rotaci´on
gen´erica.


int main(){
    int arreglo[] = {1,2,3,4};
    int primero = arreglo[0];
    int cantidad = sizeof(arreglo)/sizeof(arreglo[0]);
    for (int i = 0; i < cantidad-1; i++){
        arreglo[i] = arreglo[i+1];
    }
    arreglo[cantidad-1] = primero;
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", arreglo[i]);
    }
    return 0;
}

*/
