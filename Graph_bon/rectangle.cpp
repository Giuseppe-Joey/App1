/********
 * Fichier: rectangle.cpp
********/

#include "rectangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle()
{
	  large = 1;
	  haut = 1;
	  ancrage.x = 0;
	  ancrage.y = 0;
	  
}

Rectangle::Rectangle(int largeur, int hauteur,  int AngrageX, int AngrageY)
{
	  large = largeur;
	  haut = hauteur;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

Rectangle::~Rectangle()
{
}

void Rectangle::set_largeur(int l)
{
  	large = l;	
}

void Rectangle::set_hauteur(int h)
{
  	haut = h;	
}

int Rectangle::get_largeur()
{
  	return large;	
}

int Rectangle::get_hauteur()
{
  	return haut;	
}

double Rectangle::aire()
{
	return (large * haut);
}

void Rectangle::afficher(ostream & s)
{
	s << "Rectangle(";
        s << "l=" << get_largeur() << ", h=" << get_hauteur() << ", x=" << ancrage.x << ", y=" << ancrage.y<<  ", aire=" << aire() << ")" << std::endl;
    
}



