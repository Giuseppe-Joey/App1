
#ifndef VECTEUR_H
#define VECTEUR_H




#include <iostream>
#include "forme.h"



class Vecteur
{

	//attributs
	private:
	int taille = 0;	//est le nombre delements dans le vecteur
	int capacity = 10;	//nombre maximale ditems qui peuvent etre stocke
	Forme** tableau;


	//methodes
	public:

	Vecteur();
	~Vecteur();


	int afficherCapacity();
	int afficherTaille();
	int doublerCapacity();
	void viderVecteur();
	bool siVide();
	bool ajouterForme(Forme* forme);
	Forme* retraitForme(int index);
	Forme* obtenirForme(int index);
	void afficher(int flot);

};
#endif

