/********
 * Fichier: carre.cpp
********/

#include "carre.h"
#include <iostream>

using namespace std;

Carre::Carre()
{
	  ancrage.x = 0;
	  ancrage.y = 0;
}

Carre::Carre(int cote,  int AngrageX, int AngrageY)
{
	if(cote <  0)
	cote *= (-1);
	
	
	  large = cote;
	  haut = cote;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

Carre::~Carre()
{
}

void Carre::set_cote(int c)
{
	if(c < 0)
	c *= (-1);
	
	
  	large = c;
  	haut = c;	
}


int Carre::get_cote()
{
  	return large;	
}


double Carre::aire()
{
	return (large * haut);
}


void Carre::afficher(ostream & s)
{
	s << "Carre(";
	s << "c="<< get_largeur() << ", x=" << ancrage.x << ", y=" << ancrage.y << ", aire=" << aire() << ")" << endl;
}



