#include <stdio.h>

#define SIZE 5

int findlargestline(int matrix[][SIZE]) {
       int max = 0;

    // Recorrer todas las celdas como posibles inicios de diagonales
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            // Diagonal principal (\)
            int count = 0;
            for(int k = 0; i+k < SIZE && j+k < SIZE; k++) {
                if(matrix[i+k][j+k] == 1) count++;
                else break;
            }
            if(count > max) max = count;

            // Diagonal secundaria (/)
            count = 0;
            for(int k = 0; i+k < SIZE && j-k >= 0; k++) {
                if(matrix[i+k][j-k] == 1) count++;
                else break;
            }
            if(count > max) max = count;
        }
    }

    return max;
}

int main() {
	int matrix[SIZE][SIZE] = {
		{0, 1, 1, 1, 0},
		{0, 1, 1, 1, 1},
		{1, 1, 1, 1, 0}, 
		{0, 1, 1, 0, 1}, 
		{1, 0, 1, 0, 1}
	};
	int largestline = findlargestline(matrix);
	printf("The biggest size of the secuenty is: %d\n", largestline);

	return 0;
}
