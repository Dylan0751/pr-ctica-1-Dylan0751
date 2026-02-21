
#include <stdio.h>
int main(){
    int a[5];
    printf("a[-1] = %p \n", &a[-1]);
    printf("a[5] = %p \n", &a[5]);
    return 0;
  
}
/*por qué compila:
Porque no verifica limite del arreglo 

por qué es peligroso:
Es peligroso porque apunta antes del arreglo y por ende puede causar problemas 
como leer basura no eliminada

qué revela sobre memoria:
Demuestra que la memoria sigue siendo continua

*/
