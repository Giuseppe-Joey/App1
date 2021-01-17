#include <iostream>
#include "forme.h"

class Vecteur
{
	private:
	
	int nbElem = 0;    //nombre d'élélments
	int capacite = 5;  //nombre d'espace du vecteur
	Forme** tableau; //pointe vers le premier case d'un vecteur ponteur qui point vers une tableau qui contient des pointeurs de forme
	
	
	public:
	Vecteur();  //initialise le vecteur tableau
	~Vecteur();  //détruit tout
	
	
	bool ajoutFin(Forme* valeur);
	void doublerCapacite();
	Forme* retrait(int place);
	void retraitFin();
	int get_nbElem();
	int get_capacite();
	bool taille0();
	Forme* check(int num);
	void printVecteur();
	void viderVecteur();
	Forme* checkforme(int flot);
};
	
	
	
