#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>


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

Generalizar el ejercicio anterior para que la rotaci´on sea un par´ametro de entrada. Por
ejemplo, si el arreglo es [1, 2, 3, 4] y la rotaci´on es 2, el resultado debe ser [3, 4,
1, 2].




int main(){
    int arreglo[] = {1,2,3,4};
    int rotacion = 2;// mientras no superoe la cantidad del arregloa no hay porblema 
    int primeros[rotacion];
    for (int i = 0; i < rotacion; i++){
        primeros[i] = arreglo[i];
    }
    int cantidad = sizeof(arreglo)/sizeof(arreglo[0]);

    for (int i = 0; i < cantidad-1; i++){
        arreglo[i] = arreglo[i+rotacion];
    }

    for (int i = 0; i < rotacion; i++){
        arreglo[cantidad-rotacion+i] = primeros[i];
    }

    for (int i = 0; i < cantidad; i++) { // Esto es para printear el arrgelo 
        printf("%d ", arreglo[i]);
    }
    return 0; 
}


Ejercicio 13:
Realizar un programa que tire un dado de 6 caras 60 millones de veces y cuente la cantidad
de veces que sali´o cada n´umero. Para esto, usar un array de 6 elementos. Luego imprimir
el resultado por pantalla. Para tirar el dado aleatoriamente, usar la funci´on rand() de la
librer´ıa stdlib.h
Q LARGO



int main(){
    srand(time(NULL)); // Inicializa luna sola vez
    int sesenta = 60000000;
    int resultado[6]; 
    for (int i=0; i < sesenta; i++){
        int dado = 1 + rand() % 6;  // Número entre 1 y 6
        resultado[dado-1] ++;
    }
    //ahora contemos cada numero
    for (int i = 0; i <= 5; i++){
        printf("El dado %d salio %d veces \n",i+1,resultado[i]);
    }
    return 0;
}

//Este me dejo re gaga

Ejercicio 15:
Realizar un programa que calcule el factorial de un n´umero entero positivo. Para esto,
usar una funci´on que reciba el n´umero y devuelva el resultado.
Se puede realizar utilizando recursi´on o iteraci´on


int factorial(int n){
    int contador = 1;
    while(n > 0){
        contador = contador * n;
        n--;
    }
    return contador;
}

int main(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int x = factorial(n);
    printf("El factorial es %d\n", x);
    return 0;
}

*/

int g = 10;
void functionA() {
int a = 20;
static int b = 30;
printf("Dentro de functionA:\n");
printf(" g = %d\n", g);
printf(" a = %d\n", a);
printf(" b = %d\n", b);
// Modificaci´on de las variables
g += 5;
a += 10;
b += 5;
}
void functionB() {
int a = 40;
static int c = 50;
printf("\nDentro de functionB:\n");
printf(" g = %d\n", g);
printf(" a = %d\n", a);
printf(" c = %d\n", c);
// Modificaci´on de las variables
g += 5;
a += 10;
c += 5;
}
int main() {
printf("Dentro de main:\n");
printf(" g = %d\n", g);
functionA();
functionB();
functionA();
functionB();
printf("\nFinal en main:\n");
printf(" g = %d\n", g);
return 0;
}