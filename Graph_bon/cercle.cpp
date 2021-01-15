/********
 * Fichier: cercle.cpp
********/

#include "cercle.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;

int ray;

Cercle::Cercle()
{
	  rayon = 1;
	  pointx = 0;
	  pointy = 0;
}

Cercle::Cercle(int rayon, int AngrageX, int AngrageY);
{
	  ray = rayon;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

Cercle::~Cercle()
{
}

set_rayon(int r)
{
  	rayon = r;		
}


int get_rayon();
{
  	return rayon;	
}


double aire()
{
	return ((rayon^2)*3,14);
}

double afficher_aire()
{
	cout << "L'aire du cercle : " << aire << end1;
}


int afficher()
{
	cout << "Le rayon : " << rayon << end1;
}




