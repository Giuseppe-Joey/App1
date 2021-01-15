/********
 * Fichier: rectangle.h
********/

#include <iostream>
#include "forme.h"
#include "coordonnee.h"

using namespace std;

class rectangle : public Forme
{

private:
//attribut
	int largeur;
	int hauteur;
	

public:
//constructeur
	rectangle();
	rectangle(int largeur, int hauteur, int AngrageX, int AngrageY);
	~rectangle();
	
//fonction
	void set_largeur();
	void set_hauteur();
	get_largeur();
	get_hauteur();
	double aire();
	double afficher_aire();
	void afficher();
};


