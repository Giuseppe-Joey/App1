/********
 * Fichier: carre.cpp
********/

#include "carre.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;

 int large;

Carre::Carre()
{
	  largeur = 1;
	  pointx = 0;
	  pointy = 0;
}

Carre::Carre(int largeur,  int AngrageX, int AngrageY);
{
	  large = largeur;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

carre::~carre()
{
}

set_largeur(int l)
{
  	largeur = l;	
}


int get_largeur();
{
  	return largeur;	
}


double aire()
{
	return (largeur * largeur);
}

double afficher_aire()
{
	cout << "L'aire du carre : " << aire << end1;
}


int afficher()
{
	cout << "le carre avec la largeur : " << largeur << end1;
}



