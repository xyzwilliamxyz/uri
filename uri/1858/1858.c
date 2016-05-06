#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	
	int n, t, tm = 21, index, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &t);

		if (tm > t) {
			tm = t;
			index = i + 1;
		}
	}

	printf("%d\n", index);
	
	return 0;
}