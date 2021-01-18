/********
 * Fichier: carre.h
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "rectangle.h"

using namespace std;

class carre : public rectangle
{

private:
//attribut
	int large;
	

public:
//constructeur
	carre();
	carre(int largeur, int AngrageX, int AngrageY);
	~carre();
	
//fonction
	void set_largeur(int l);
	int get_largeur();
	double aire();
	void afficher(ostream & s);
};

#endif
