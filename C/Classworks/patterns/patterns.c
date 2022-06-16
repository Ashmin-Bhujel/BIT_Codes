#include <stdio.h>

// Function Declarations
void askUser(int d);
void triangle(int n);
void reverseTriangle(int n);
void pyramid(int n);

// main() function
int main() {
	int d = 1;
	
	do {
		askUser(d);
		printf("Do you want to print another pattern?\nYes(1)\nNo(0)\n: ");
		scanf("%d", &d);
		printf("\n");
	} while (d == 1 && !(d == 0));
	
	printf("Thank You!\nHave a great day.\n");
	return 0;
}

// Function definitions

// Asking user for decision
void askUser(int d) {
	int n, p;
	
	// Asking user what pattern to print
	printf("What do you want to print?\nTriangle(1)\nReverse Triangle(2)\nPyramid(3)\n: ");
	scanf("%d", &p);
	printf("\n");
	
	// Asking user the height of the pattern
	printf("Enter the height: ");
	scanf("%d", &n);
	printf("\n");
	
	// Checking and printing the required pattern
	if (p == 1) {
		triangle(n);
		printf("\n");
	} else if (p == 2) {
		reverseTriangle(n);
		printf("\n");	
	} else if (p == 3) {
		pyramid(n);
		printf("\n");
	}
}

// Triangle
void triangle(int n) {
	int row, col;
	
	for (row = 1; row <= n; row++) {
		for (col = 1; col <= row; col++) {
			printf(" O ");
		}
		printf("\n");
	}
}

// Reverse Triangle
void reverseTriangle(int n) {
	int row, col;
	
	for (row = 1; row <= n; row++) {
		for (col = 1; col <= n; col++) {
			if (col > (n - row)) {
				printf(" O ");	
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}	
}

// Pyramid
void pyramid(int n) {
	int row, col;
	
	for (row = 1; row <= n; row++) {
		for (col = 1; col <= ((n * 2) - 1); col++) {
			if (col == n || col >= (n - (row - 1)) & col <= (n + (row - 1))) {
				printf(" O ");
			}else if(col >= (n + (row - 1))) {
				continue;
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}
}