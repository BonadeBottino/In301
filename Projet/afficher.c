#include <uvsqgraphics.h>

#include "mes_types.h"
#include "lire_ecrire.h"


void initialiser_affichage(SLIDER S) 
{
	init_graphics (CASE*S.L,CASE*S.H);
}

void afficher_grille(SLIDER S) 
{
	int i ; 
	POINT p1,p2 ; 
	
	p1.x=0 ; p1.y=0 ;
	p2.x=0 ; p2.y=S.H*CASE ;
	
	for(i=0 ; i<S.L ; i++)
	{
		p1.x+=CASE ; 
		p2.x+=CASE ;
		draw_line(p1,p2,red) ; 
	}
	
	p1.x=0 ; p1.y=0 ;
	p2.x=S.L*CASE ; p2.y=0 ;
	
	for(i=0 ; i<S.H ; i++)
	{
		p1.y+=CASE ; 
		p2.y+=CASE ;
		draw_line(p1,p2,blue) ; 
	}
}

void afficher_murs(SLIDER S) 
{
}

void afficher_le_slider(SLIDER S) 
{
}

void afficher_sortie(SLIDER S) 
{
}


void afficher_slider (SLIDER S) 
{
	afficher_grille(S);
	afficher_murs(S);
	afficher_le_slider(S);
	afficher_sortie(S);
}


void finir_affichage(SLIDER S) 
{
	wait_escape();
}
