#include <iostream>
#include <stdio.h>
using namespace std;

int compare(string s1, string s2) {

	if (s1 == "tesoura" && s2 == "papel") {

		return 1;
	}

	if (s1 == "papel" && s2 == "pedra") {

		return 1;
	}

	if (s1 == "pedra" && s2 == "lagarto") {

		return 1;
	}

	if (s1 == "lagarto" && s2 == "Spock") {

		return 1;
	}

	if (s1 == "Spock" && s2 == "tesoura") {

		return 1;
	}

	if (s1 == "tesoura" && s2 == "lagarto") {

		return 1;
	}

	if (s1 == "lagarto" && s2 == "papel") {

		return 1;
	}

	if (s1 == "papel" && s2 == "Spock") {

		return 1;
	}

	if (s1 == "Spock" && s2 == "pedra") {

		return 1;
	}

	if (s1 == "pedra" && s2 == "tesoura") {

		return 1;
	}

	return 0;
}

int main() {
	
	int n, i = 1;
	string s1, s2;

	cin >> n;

	while (n--) {

		cin >> s1 >> s2;

		if (s1 == s2) {
			printf("Caso #%d: De novo!\n", i++);
		} else if (compare(s1, s2)) {
			printf("Caso #%d: Bazinga!\n", i++);
		} else {
			printf("Caso #%d: Raj trapaceou!\n", i++);
		}
	}
	
	return 0;
}