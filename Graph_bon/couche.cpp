/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
#include <iostream>

using namespace std;

Couche::Couche()
{}

Couche::~Couche()
{}

bool Couche::AjoutForme(Forme* f)
{
	return v.ajout(f);
	
}

Forme* Couche::RetireForme(int index)
{
	return v.retrait(index);
}

Forme* Couche::ObtenirForme(int index)
{
        return v.obtenir(index);
}

double Couche::Aire()
{
	double airTotal = 0;
	
	for(int i=0; i < v.get_size(); i++)
        {

            airTotal += v.obtenir(i)->aire();
        } 
	
	return airTotal;
}

bool Couche::Translater(int x, int y)
{
        if(v.vecteur_vide()==true)
	{
		return false;		
	}
	else
	{
		for(int i=0; i < v.get_size(); i++)
        	{

            		v.obtenir(i)->translater(x,y);
        	} 				
	}				
}

bool Couche::Reinitialiser()
{
	if(v.vecteur_vide()==true)
	{
		return false;		
	}
	else
	{
		v.vider();
		SetEtat(Cachee);
		return true;
	}			
}

void Couche::SetEtat(Etat lEtat)
{
	unEtat = lEtat;
}

Couche::Etat Couche::getEtat()
{
	return unEtat;
}

void Couche::afficher(ostream & s)
{
	v.afficher_vecteur(s);
}




