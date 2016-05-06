#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main() {
	
	double a, b, c;
	
	//scanf("%f %f", &a, &b);
	cin >> a >> b;
	c = b - a;

	printf("%.2f%%\n", c / a * 100.0);

	
	return 0;
}