
/*
Datos:
base = 2000
sizeof(int) = 4
m[1][2] = 2024
Calcula:
número de columnas
tamaño total

Se vuleve a usar la formula: m[i][j]= base + ((i x columnas) + j) x 4
(el 4 es por ser entero y los datos nos lo da), entonces se tiene que despejar a las columnas 
de la ecuacion: 2024 = 2000 + ((1 x columnas) + 2) x 4
se sutituyen valores:
2024 = 2000 + ((1 x columnas) + 2) x 4
2024 = 2000 + ((columnas) + 2) x 4
2024 - 2000 / 4 = columnas + 2
6 - 2 = columnas
columnas = 4

Existen al menos 2 filas y 4 columnas, por tanto:
2 x 4 = 8 elementos; y cada elemento ocupa 4 bytes y multiplicando no. elementos x bytes ocupados
eso queda:
8 x 4 = 32 bytes; dando un tamaño total de 32 bytes.
*/
