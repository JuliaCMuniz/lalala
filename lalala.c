#include <stdio.h>
#include <stdlib.h>

int main () {

	char frase1[3][10] = {"Azure", "Banana", "Picole"};
	char frase2[3][10] = {"A", "B", "C"};
	char frase3[3][10]= {"45", "23", "190"};	
	int i, j, k;
	i = rand() % 3;
	j = rand() % 3;
	k = rand() % 3;

	printf("%s %s %s\n", frase1[i], frase2[j], frase3[k]);
	
	return 0;
}
