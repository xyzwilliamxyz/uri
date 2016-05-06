#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	
	int x, y, i, j;
	char g[101][101], dir, result;

	scanf("%d", &x);
	scanf("%d", &y);
	
	for (i = 0; i < y; i++) {

		cin.getline(g[i], 100);
	}

	i = j = 0;
	dir = g[i][j];
	g[i][j] = 'x';

	while (1) {

		if (dir == '>') j++;
		if (dir == 'v') i++;
		if (dir == '<') j--;
		if (dir == '^') i--;

		printf("%c", dir);
		
		if (i == -1 || j == -1 || i == y || j == x || g[i][j] == 'x') {
			result = '!';
			break;
		}

		if (g[i][j] == '*') {
			result = '*';
			break;
		}

		if (g[i][j] != '.') {
			dir = g[i][j];
			g[i][j] = 'x';
		}
	}

	printf("%c\n", result);
	
	return 0;
}