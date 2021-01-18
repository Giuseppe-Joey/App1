/********
 * Fichier: carre.cpp
********/

#include "carre.h"
#include <iostream>

using namespace std;

carre::carre()
{
	  large = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
}

carre::carre(int largeur,  int AngrageX, int AngrageY)
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
  	large = l;	
}


int carre::get_largeur()
{
  	return large;	
}


double carre::aire()
{
	return (large * large);
}


void carre::afficher(ostream & s)
{
	s << "Carre(";
	ancrage.afficher(s);
	s << "c="<< get_largeur() <<", aire=" << aire() << ")" << endl;
}



