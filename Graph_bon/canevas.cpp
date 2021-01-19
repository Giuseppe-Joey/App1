/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"
#include <iostream>

using namespace std;

Canevas::Canevas()
{
	couches[0].SetEtat(Couche::Etat::Active);
	couches[1].SetEtat(Couche::Etat::Initialisee);
	couches[2].SetEtat(Couche::Etat::Cachee);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   
	//lindex = 0;
	cou.Reinitialiser();
	couches[0].SetEtat(Couche::Etat::Active);
	return true;
	
}

bool Canevas::activerCouche(int index)
{
   
    if(index > MAX_COUCHES)
    {
        return false;
    }
    
    if(couches[index].getEtat() == Couche::Etat::Active)
    {
        couches[index].SetEtat(Couche::Etat::Inactive);
    }
   couches[index].SetEtat(Couche::Etat::Active);
   return true;
}

bool Canevas::cacherCouche(int index)
{
	if(index > MAX_COUCHES)
    {
        return false;
    }
    
    couches[index].SetEtat(Couche::Etat::Cachee);
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   
   for(int i=0; i < MAX_COUCHES; i++)
   {
   	if(couches[i].getEtat() == Couche::Etat::Active)
   	return cou.AjoutForme(p_forme);
   }
   return false;
}

bool Canevas::retirerForme(int index)
{
   return couches[index].RetireForme(index);
}

double Canevas::aire()
{
	double aireTolal=0;
	
	for(int i=0; i < MAX_COUCHES; i++)
        {

            aireTolal += cou.ObtenirForme(i)->aire();
        } 
	
	return aireTolal;
}

bool Canevas::translater(int deltaX, int deltaY)
{

    if(cou.getEtat() == Couche::Etat::Active)
    {
        return cou.Translater(deltaX, deltaY);
    }
   return true;
}

void Canevas::afficher(ostream & s)
{ 
	for(int i = 0; i < MAX_COUCHES; i++)
	{
		s << "----- Couche " << i << endl;
		cou.afficher(s);
	}
	
}
