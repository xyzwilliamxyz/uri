#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main() {
	
	int n, f;
	char h[100];

	scanf("%d\n", &n);
	while (n--) {

		scanf("%s %d\n", h, &f);

		if (strcmp(h, "Thor") == 0) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
	
	
	
	return 0;
}