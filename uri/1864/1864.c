#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	
	int i, n;
	stirng s = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%c", s[i]);
	}
	printf("\n");
	
	return 0;
}