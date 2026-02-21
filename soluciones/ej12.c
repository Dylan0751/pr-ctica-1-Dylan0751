
/*
Se sabe 
int m[3][5];
base = 4000

Calcula:
1. dirección de m[2][4]
2. dirección de m[1][3]
3. diferencia entre ambas

se usara la formula:
&m[i][j]= base + ((i x columnas) + j) x 4; donde el numero de columnas es 5
&m[2][4] = 4000 + ((2 x 5) + 4) x 4 = 4056
&m[1][3] = 4000 + ((1 x 5) + 3) x 4 = 4032
La diferencia entre ambas 
4056 - 4032 = 24 bytes
*/
