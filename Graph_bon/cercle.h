/********
 * Fichier: cerlce.h
********/

#include <iostream>
#include "forme.h"
#include "coordonnee.h"

using namespace std;

class cercle : public Forme
{

private:
//attribut
	int ray;
	

public:
//constructeur
	cercle();
	cercle(int rayon, int AngrageX, int AngrageY);
	~cercle();
	
//fonction
	void set_rayon(int r);
	int get_rayon();
	double aire();
	void afficher(ostream & s);
};

