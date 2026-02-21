
#include <stdio.h>
int main(){
    int m[2][4];
    for(int i = 0;i<2;i++){
        for(int j = 0; j<4; j++){
            printf("m[%d][%d] = [%p] ",i,j, &m[i][j]);
        }
        printf("\n");
    }
    return 0;
    //la formula usada es m[i][j]= base + ((i x columnas) + j)x 4
    //El almacenamiento se da por filas
}
