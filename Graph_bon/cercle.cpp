/********
 * Fichier: cercle.cpp
********/

#include "cercle.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;


cercle::cercle()
{
	  ray = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
}

cercle::cercle(int rayon, int AngrageX, int AngrageY)
{
	  ray = rayon;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

cercle::~cercle()
{
}

void cercle::set_rayon(int r)
{
  	ray = r;		
}


int cercle::get_rayon()
{
  	return ray;	
}


double cercle::aire()
{
	return ((ray^2)*3,141592653);
}



void cercle::afficher(ostream & s)
{
	cout << "Le rayon : " << ray << endl;
}




