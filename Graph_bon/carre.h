/********
 * Fichier: carre.h
********/

#include <iostream>
#include "rectangle.h"
#include "coordonnee.h"

using namespace std;

class carre : public rectangle
{

private:
//attribut
	int largeur;
	

public:
//constructeur
	carre();
	carre(int largeur, int AngrageX, int AngrageY);
	~carre();
	
//fonction
	void set_largeur();
	get_largeur();
	double aire();
	double afficher_aire();
	void afficher();
};
