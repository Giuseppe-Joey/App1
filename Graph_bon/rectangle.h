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
	int large;
	int haut;
	

public:
//constructeur
	rectangle();
	rectangle(int largeur, int hauteur, int AngrageX, int AngrageY);
	~rectangle();
	
//fonction
	void set_largeur(int l);
	void set_hauteur(int h);
	int get_largeur();
	int get_hauteur();
	double aire();
	void afficher(ostream & s);
};


