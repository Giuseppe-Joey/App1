/********
 * Fichier: cercle.cpp
********/

#include "cercle.h"
#include <iostream>

using namespace std;


Cercle::Cercle()
{
	if(ray < 0)
	ray *= (-1);
	
	  ray = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
}

Cercle::Cercle(int rayon, int AngrageX, int AngrageY)
{
	if(rayon < 0)
	rayon *= (-1);
	
	  ray = rayon;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

Cercle::~Cercle()
{
}

void Cercle::set_rayon(int r)
{	
	if (r < 0)
	r *= (-1);
	
  	ray = r;		
}


int Cercle::get_rayon()
{
  	return ray;	
}


double Cercle::aire()
{
	return (ray*ray)*3.141592653;
}



void Cercle::afficher(ostream & s)
{
	s << "Cercle(";
        s << "r=" << get_rayon() << ", x=" << ancrage.x << ", y=" << ancrage.y << ", aire=" << aire() << ")" << endl;
	
}




