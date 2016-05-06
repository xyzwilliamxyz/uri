#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);

	if (b < a && c >= b) { //1
		printf(":)\n");
	} else if (b > a && c <= b) { //2
		printf(":(\n");
	} else if (b > a && c > b && c - b < b - a) { //3
		printf(":(\n");
	} else if (b > a && c > b && c - b >= b - a) { //4
		printf(":)\n");
	} else if (b < a && c < b && abs(c - b) < abs(b - a)) { //5
		printf(":)\n");
	} else if (b < a && c < b && abs(c - b) <= (b - a)) { //6
		printf(":(\n");
	} else if (b == a && c - b > b - a) { //7
		printf(":)\n");
	} else {
		printf(":(\n");
	}
	
	return 0;
}