#include <stdio.h>
#include <stdint.h>

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



