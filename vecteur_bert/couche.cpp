/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include <iostream>
#include "couche.h"
#include "forme.h"
#include "vecteur.h"



/*********************************************/
Couche::Couche()
{
	
};

/*********************************************/
Couche::~Couche()
{
	
};


/*********************************************/
void Couche::stockerForme()
{
	Vecteur objetV;
	objetV.ajoutFin(Forme* valeur);
};

/*********************************************/
void Couche::utiliserVecteur()
{
	Vecteur objetV;
	objetV.ajoutFin(Forme* valeur);
};

/*********************************************/
bool Couche::ajoutForme()
{
	
};

/*********************************************/
Forme*  Couche::retraitForme(int index)
{
	vec.retrait(index);
	
	point* = ptrCpy
	return point;
	
}; 

/*********************************************/
Forme* Couche::obtenirForme(int index)
{
	vec.checkForme(index);
	return tableau[index];
};

/*********************************************/
int Couche::aireTotale(int nbElem)
{
	int aireTotale = 0;
	
	for (int i = 0; i < nbElem; i++)
	{ 	
		aireTotale += tableau[i].aire();
	}
	
	return aireTotale;
};

/*********************************************/
bool Couche::translaterCouche(int deltaX, int deltaY, int deltaZ)
{
	ancrage.x = deltax;
	ancrage.y = deltay;
	return 1;
};

/*********************************************/
bool Couche::changerEtat()
{
	
};

/*********************************************/
void Couche::afficherForme()
{

};

/*********************************************/

