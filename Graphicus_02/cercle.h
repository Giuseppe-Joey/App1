/********
 * Fichier: cerlce.h
********/

#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"


using namespace std;

class Cercle : public Forme
{

private:
//attribut
	int ray;
	

public:
//constructeur
	Cercle();
	Cercle(int rayon, int AngrageX, int AngrageY);
	~Cercle();
	
//fonction
	void set_rayon(int r);
	int get_rayon();
	double aire();
	void afficher(ostream & s);
};

#endif
