#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el tamaño de la matriz cuadrada: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    // Llenar la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Mostrar la matriz
    printf("\nMatriz ingresada:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int suma_principal = 0, suma_secundaria = 0;
    
    // Calcular sumas de diagonales
    for(int i = 0; i < n; i++) {
        suma_principal += matriz[i][i];          // Diagonal principal
        suma_secundaria += matriz[i][n-1-i];    // Diagonal secundaria
    }
    
    printf("\nSuma diagonal principal: %d\n", suma_principal);
    printf("Suma diagonal secundaria: %d\n", suma_secundaria);
    printf("Suma total de ambas diagonales: %d\n", suma_principal + suma_secundaria);
    
    return 0;
}
