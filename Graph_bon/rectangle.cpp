/********
 * Fichier: rectangle.cpp
********/

#include "rectangle.h"
#include <iostream>

using namespace std;


rectangle::rectangle()
{
	  large = 1;
	  haut = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
	  
}

rectangle::rectangle(int largeur, int hauteur,  int AngrageX, int AngrageY)
{
	  large = largeur;
	  haut = hauteur;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

rectangle::~rectangle()
{
}

void rectangle::set_largeur(int l)
{
  	large = l;	
}

void rectangle::set_hauteur(int h)
{
  	haut = h;	
}

int rectangle::get_largeur()
{
  	return large;	
}

int rectangle::get_hauteur()
{
  	return haut;	
}

double rectangle::aire()
{
	return (large * haut);
}

void rectangle::afficher(ostream & s)
{
	s << "Rectangle(";
	ancrage.afficher(s);
        s << "l=" << get_largeur() << ", h=" << get_hauteur() << ", aire=" << aire() << ")" << std::endl;
    
}



