/********
 * Fichier: rectangle.h
********/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"
#include "coordonnee.h"

using namespace std;

class Rectangle : public Forme
{

protected:
//attribut
	int large;
	int haut;
	

public:
//constructeur
	Rectangle();
	Rectangle(int largeur, int hauteur, int AngrageX, int AngrageY);
	~Rectangle();
	
//fonction
	void set_largeur(int l);
	void set_hauteur(int h);
	int get_largeur();
	int get_hauteur();
	double aire() override;
	void afficher(ostream & s) override;
};

#endif
