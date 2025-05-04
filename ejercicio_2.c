#include <stdio.h>

/*The array MUST have at least one element greater than zero */

int find_maximum(int arr[], int n) {
	int maximum = arr[0]; //start max in first element.

	for (int i = 1; i < n; i++) {
		if (arr[i] > maximum) {      //Change < for >.
			maximum = arr[i];
		}
	}
	return maximum;
}

int main() {
	int numbers[] = {10, 20, 5, 40, 30};
	int n= sizeof(numbers) / sizeof(numbers[0]);

	int maximum = find_maximum(numbers, n);
	printf("The biggest number is: %d", maximum);
	return 0;
}
