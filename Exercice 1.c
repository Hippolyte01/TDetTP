#include<stdio.h>
#include<stdlib.h>

char* cloneStr(char* chaine) {
	int NbCase = strlen(chaine);
	char* copie = (char*)malloc(NbCase * sizeof(char));
	char* positionCopie = copie;
	char* positionChaine = chaine;
	
	if (copie != NULL) {
		while (*chaine != '\0') {
			*copie = *chaine;
			copie++;
			chaine++;
		}
		*copie = '\0';
		copie = positionCopie;
		chaine = positionChaine;
	}
}

int main() {
	char* C1 = "salut";
	char* C2;
	C2 = cloneStr(C1);
	printf("C1 est %s, et C2 est %s", C1, C2);
	return 0;
}