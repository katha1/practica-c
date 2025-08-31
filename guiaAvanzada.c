#include <stdio.h>

typedef struct{
    char nombre[20];
    int vida;
    double ataque;
    double defensa;
}monstruos_t;

monstruos_t  evolution(monstruos_t m){
    monstruos_t monstruo_evolu = m; //lo copiamos
    monstruo_evolu.ataque += 10;
    monstruo_evolu.defensa += 10;
    return monstruo_evolu;
}

int main(){
    monstruos_t monstruos[] = {
    {"Wither", 100, 30, 20},
    {"Malenia", 250, 50, 70},
    {"Leviathan", 170, 90, 100},
};
 
    //mostramos los datos antes
    printf("Datos antes de la evolucion: \n");
    printf("Nombre: %s\n", monstruos[1].nombre);
    printf("Ataque: %f\n", monstruos[1].ataque);
    printf("Defensa: %f\n", monstruos[1].defensa);

    monstruos_t mons_evo = evolution(monstruos[1]);
    printf("Datos antes de la evolucion: \n");
    printf("Nombre: %s\n", mons_evo.nombre);
    printf("Ataque: %f\n", mons_evo.ataque);
    printf("Defensa: %f\n", mons_evo.defensa);

}
/*Definir una funci´on evolution que reciba un monstruo t y devuelva un nuevo monstruo
con los mismos atributos, pero con el ataque y defensa aumentados en 10. Luego, usar
esta funci´on para evolucionar un monstruo y mostrar por pantalla sus atributos antes y
despu´es de la evoluci´on.*/

