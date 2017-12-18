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
	
	affiche_auto_off() ;
	
	for(i=0 ; i<S.L ; i++)
	{
		p1.x+=CASE ; 
		p2.x+=CASE ;
		draw_line(p1,p2,white) ; 
	}
	
	p1.x=0 ; p1.y=0 ;
	p2.x=S.L*CASE ; p2.y=0 ;
	
	for(i=0 ; i<S.H ; i++)
	{
		p1.y+=CASE ; 
		p2.y+=CASE ;
		draw_line(p1,p2,white) ; 
	}
	
	affiche_auto_on() ;
}

void afficher_murs(SLIDER S) 
{
	POINT w1, w2 ;
	//A MODIFIER AVEC LECTURE DE FICHIER NIVEAU
	w1.x=150 ; w1.y=151 ;
	w2.x=w1.x+CASE ; w2.y=w1.y-1 ; 
	
	draw_fill_rectangle(w1,w2,red) ; 
	
}

void afficher_le_slider(SLIDER S) 
{
	POINT Slider ; 
	//A MODIFIER AVEC LECTURE DE FICHIER NIVEAU
	Slider.x=45 ; Slider.y=45 ; 
	draw_fill_circle(Slider,CASE/2-2,vert) ; 
}

void afficher_sortie(SLIDER S) 
{
	POINT sort1, sort2 ;
	
	//A MODIFIER AVEC LECTURE DE FICHIER NIVEAU
	
	sort1.x = 90 ; sort1.y = 90 ; 
	sort2.x = sort1.x+CASE ; sort2.y = sort1.y+CASE ; 
	
	draw_fill_rectangle(sort1,sort2,blue) ;
	
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
