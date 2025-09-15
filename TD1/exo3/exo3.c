#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int UpperToLower(char letter) {
	return tolower(letter);
}



int main() {
	
	char lettre = 'A';
	printf("Voici la lettre %c en minuscule %c", lettre, UpperToLower(lettre));

	return EXIT_SUCCESS;

}



