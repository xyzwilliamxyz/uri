#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	
	int a, b;
	int i, j;

	scanf("%d %d", &a, &b);
	//printf("%d %d", a / b, a % b);

	for (i = -1000; i <= 1000; i++) {

		for (j = -1000; j <= 1000; j++) {

			if (a == b * i + j) {
				printf("%d %d\n", i, j);
				break;
			}
		}
	}
	
	return 0;
}