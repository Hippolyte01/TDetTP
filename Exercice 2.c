#include<stdio.h>
#include<stdlib.h>

int main() {
	int* p;
	p = (int*)malloc(10 * sizeof(int));
	
	for (int i = 0; i < 10; i++) {
		p[i] = i + 1;
		//*(p + i) = i + 1;
	}


	int* sauvegarde = p;
	int* p2 = realloc(p, 20 * sizeof(int));

	if (p2 != NULL) {
		for (int i = 10; i < 20; i++) {
			p2[i] = i + 1;
		}
		for (int i = 0; i < 20; i++) {
			printf("%d", p2[i]);
		}
	}
	else free(p);
	p = sauvegarde;

}