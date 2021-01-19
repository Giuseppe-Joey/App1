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
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   
	for(int i=0; i < MAX_COUCHES; i++)
  	{
		couches[i].Reinitialiser();
	}
	return true;
	
}

bool Canevas::activerCouche(int index)
{
   
    if(index > MAX_COUCHES)
    {
        return false;
    }
    
    for(int i=0; i < MAX_COUCHES; i++)
  	{
    	if(couches[i].getEtat() == Couche::Etat::Active)
    	{
        	couches[i].SetEtat(Couche::Etat::Inactive);
    	}	
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
   	{
   		return couches[i].AjoutForme(p_forme);
   	}
   }
   return false;
}

bool Canevas::retirerForme(int index)
{
   for(int i=0; i < MAX_COUCHES; i++)
   {
   	if(couches[i].getEtat() == Couche::Etat::Active)
   	{
   		return couches[i].RetireForme(index);
   	}
   }
   return false;
}

double Canevas::aire()
{
	double aireTolal = 0.0;
	
	for(int i = 0; i < MAX_COUCHES; i++)
        {

            aireTolal += couches[i].aire();
        } 
	
	return aireTolal;
}

bool Canevas::translater(int deltaX, int deltaY)
{

    
        for(int i = 0; i < MAX_COUCHES; i++)
		{
			if(couches[i].getEtat() == Couche::Etat::Active)
    		{
			return couches[i].Translater(deltaX, deltaY);
			}
    }
   return true;
}

void Canevas::afficher(ostream & s)
{ 
	for(int i = 0; i < MAX_COUCHES; i++)
	{
		s << "----- Couche " << i << endl;
		couches[i].afficher(s);
	}
	
}
