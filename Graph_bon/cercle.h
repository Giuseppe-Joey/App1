/********
 * Fichier: cerlce.h
********/

#include <iostream>
#include "forme.h"
#include "coordonnee.h"

using namespace std;

class cerlce : public Forme
{

private:
//attribut
	int rayon;
	

public:
//constructeur
	cercle();
	cercle(int rayon, int AngrageX, int AngrageY);
	~cercle();
	
//fonction
	void set_rayon();
	get_rayon();
	double aire();
	double afficher_aire();
	void afficher();
};

