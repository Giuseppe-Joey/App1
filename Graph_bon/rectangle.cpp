/********
 * Fichier: rectangle.cpp
********/

#include "rectangle.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;

 int large;
 int haut;

Rectangle::Rectangle()
{
	  largeur = 1;
	  hauteur = 1;
	  pointx = 0;
	  pointy = 0;
}

Rectangle::Rectangle(int largeur, int hauteur,  int AngrageX, int AngrageY);
{
	  large = largeur;
	  haut = hauteur;
	  ancrage.x = AngrageX;
	  ancrage.y = AngrageY;
}

Rectangle::~Rectangle()
{
}

set_largeur(int l)
{
  	largeur = l;	
}

set_hauteur(int h)
{
  	hauteur = h;	
}

int get_largeur();
{
  	return largeur;	
}

int get_hauteur();
{
  	return hauteur;	
}

double aire()
{
	return (largeur * hauteur);
}

double afficher_aire()
{
	cout << "L'aire du rectangle : " << aire << end1;
}


int afficher()
{
	cout << "le rectangle avec la largeur : " << largeur << "et la hauteur" << hauteur << end1;
}



