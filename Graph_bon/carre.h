/********
 * Fichier: carre.h
********/

#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "rectangle.h"

using namespace std;

class Carre : public Rectangle
{

public:
//constructeur
	Carre();
	Carre(int cote, int AngrageX, int AngrageY);
	~Carre();
	
//fonction
	void set_cote(int c);
	int get_cote();
	double aire();
	void afficher(ostream & s);
};

#endif
