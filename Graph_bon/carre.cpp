/********
 * Fichier: carre.cpp
********/

#include "carre.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;

 int large;

carre::carre()
{
	  largeur = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
}

carre::carre(int largeur,  int AngrageX, int AngrageY);
{
	  large = largeur;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

carre::~carre()
{
}

void carre::set_largeur(int l)
{
  	largeur = l;	
}


int carre::get_largeur();
{
  	return largeur;	
}


double carre::aire()
{
	return (largeur * largeur);
}




void carre::afficher()
{
	cout << "le carre avec la largeur : " << largeur << endl;
}



