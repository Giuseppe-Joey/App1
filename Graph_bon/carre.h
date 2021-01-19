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

public:
//constructeur
	carre();
	carre(int cote, int AngrageX, int AngrageY);
	~carre();
	
//fonction
	void set_cote(int c);
	int get_cote();
	double aire();
	void afficher(ostream & s);
};

#endif
