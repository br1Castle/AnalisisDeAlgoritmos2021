#include <stdio.h>
#include <stdlib.h>

int main(){
int vect[6]; //Indicar el numero de datos a ordenar
int i;

 for(i=0; i<=6 ; i++){ //Indicar el numero de datos a ordenar
    vect[i] = rand() % 9999 + 1;
 }
 
int k, j, aux, n = 6; //Indicar el numero de datos a ordenar
    for(k=1; k<n; k++) {
        j = k;
        aux = vect[k];
        while(j>0 && aux<vect[j-1]) {
        vect[j] = vect[j-1];
        j=j-1;
        }
        vect[j] = aux;
    }
    printf("Los elementos ordenados son: \n");
    for(k=0; k<n; k++) {
    printf("[%d]: %d\n", k, vect[k]);
    }
    
    return 0;
}
