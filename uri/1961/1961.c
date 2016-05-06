#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;


int main() {
	
	int p, n, i, ok = 1;
	int v[101];
	
	scanf("%d %d", &p, &n);

	for (i = 0; i < n; i++) {

		scanf("%d", &v[i]);
	}

	for (i = 0; i < n - 1; i++) {

		if (v[i] + p < v[i + 1] || v[i + 1] - v[i] > p) {
			ok = 0;
			break;
		}
	} 

	if (ok) {
		printf("YOU WIN\n");
	} else {
		printf("GAME OVER\n");
	}
	
	return 0;
}