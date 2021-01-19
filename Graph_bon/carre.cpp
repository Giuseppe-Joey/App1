/********
 * Fichier: carre.cpp
********/

#include "carre.h"
#include <iostream>

using namespace std;

carre::carre()
{
	  ancrage.x = 0;
	  ancrage.y = 0;
}

carre::carre(int cote,  int AngrageX, int AngrageY)
{
	  large = cote;
	  haut = cote;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

carre::~carre()
{
}

void carre::set_cote(int c)
{
  	large = c;
  	haut = c;	
}


int carre::get_cote()
{
  	return large;	
}


double carre::aire()
{
	return (large * haut);
}


void carre::afficher(ostream & s)
{
	s << "Carre(";
	ancrage.afficher(s);
	s << "c="<< get_largeur() <<", aire=" << aire() << ")" << endl;
}



