#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
	
	int g = 0, n;
	string s;

	while (g < 3) {

		n = 0;
		cin >> s;

		while (s != "caw") {

			if (s[0] == '*') {
				n += 4;
			}
			if (s[1] == '*') {
				n += 2;
			}
			if (s[2] == '*') {
				n += 1;
			}

			cin >> s;
		}

		cout << n << "\n";

		cin >> s;
		g++;

	}
	
	return 0;
}