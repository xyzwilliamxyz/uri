#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int n, i, j;

	while (scanf("%d", &n) != EOF) {

		for (i = 0; i < n; i++) {

			for (j = 0; j < n; j++) {

				if (i  >= n / 3 && i <= n - 1 - n / 3 && j  >= n / 3 && j <= n - 1 - n / 3) {

					if (i == n / 2 && j == n / 2) {
						printf("4");
					} else {
						printf("1");
					}
				} else {

					if (i == j && (i < n / 2 && j < n / 2 || i > n / 2 && j > n / 2)) {
						printf("2");
					} else if (i == n - j - 1 && (i > n / 2 && j < n / 2 || i < n / 2 && j > n / 2)) {
						printf("3");
					} else {
						printf("0");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	return 0;
}