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

double Couche::aire()
{
	double airTotal;
	
	for(int i=0; i < v.get_size(); i++)
        {

            airTotal += v.obtenir(i)->aire();
        } 
	
	return airTotal;
}

bool Couche::Translater(int x, int y)
{
    if(v.get_size() == 0)
	{
		return false;		
	}
	else
	{
		for(int i=0; i < v.get_size(); i++)
        	{

            		v.obtenir(i)->translater(x,y);
        	}
        return true; 				
	}				
}

bool Couche::Reinitialiser()
{
	if(v.get_size() == 0)
	{
		return false;		
	}
	else
	{
		v.vider();
		SetEtat(Initialisee);
		return true;
	}			
}

bool Couche::SetEtat(Etat lEtat)
{
	unEtat = lEtat;
	return true;
}

Couche::Etat Couche::getEtat()
{
	return unEtat;
}

void Couche::afficher(ostream & s)
{
	if(unEtat != Etat::Initialisee)
	{
		
		if(unEtat == Etat::Cachee)
		{
			s << "Couche cachee" << endl;
		}
		else if(v.get_size() == 0 && unEtat != Etat::Cachee)
		{
			s << "Couche vide" << endl;
		}
		else
		{	
			v.afficher_vecteur(s);
		}		
	}
	else 
	{
		s << "Couche Initialisée" << endl;
	}
		
}




