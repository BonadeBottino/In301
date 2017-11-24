#include <stdio.h>

#include "mes_types.h"


SLIDER lire_fichier(char *nom) {

	printf("nom = %s\n",nom);
	SLIDER S;
	S.L = 20;
	S.H = 15;
	
	return S;
}


void ecrire_fichier(SLIDER S, char*nom) {
}
