#include <stdio.h>

int main() {
    int n;
    double A[10][10];
    double B[10];

    printf("Ingrese el tamaño de la matriz (n x n): ");
    scanf("%d", &n);

    printf("Ingrese los elementos de la matriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        if(i % 3 == 1) {
            double suma = 0;
            for(int j = 0; j <= i; j++) {
                suma += A[i][j];
            }
            B[i] = suma;
        }
        else if(i % 3 == 2) {
            double producto = 1;
            for(int j = 1; j < n; j++) {
                producto *= A[j][i];
            }
            B[i] = producto;
        }
        else {
            double producto = 1;
            double suma = 0;

            for(int j = 0; j < n; j++) {
                producto *= A[j][i];
                suma += A[j][i];
            }

            if(suma != 0)
                B[i] = producto / suma;
            else
                B[i] = 0; 
        }
    }
    printf("\nArreglo B:\n");
    for(int i = 0; i < n; i++) {
        printf("B[%d] = %.2lf\n", i, B[i]);
    }

    return 0;
}