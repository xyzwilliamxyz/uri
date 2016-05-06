#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int l, v, i, nivel;

	while (scanf("%d", &l) != EOF) {

		nivel = 0;

		for (i = 0; i < l; i++) {

			scanf("%d", &v);

			if (v < 10 && nivel < 1) {
				nivel = 1;
			}
			if (v >= 10 && v < 20 && nivel < 2) {
				nivel = 2;
			}
			if (v >= 20  && nivel != 3) {
				nivel = 3;
			}
		}

		printf("%d\n", nivel);
	}
	
	return 0;
}