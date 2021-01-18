/********
 * Fichier: vecteur.cpp
 ********/

#include "vecteur.h"
#include <iostream>

using namespace std;

vecteur::vecteur() 
{
  taille = 0;
  capacity = 10;
  tableau = new Forme*[capacity];
}

vecteur::~vecteur() 
{
vider();
delete[] tableau;
}

int vecteur::get_capacity() 
{ 
return capacity; 
}

int vecteur::get_size() 
{ 
return taille; 
}

bool vecteur::add_capacity() 
{
  Forme **newTab = new Forme*[capacity*2];
  
    for (int i = 0; i < taille; i++) 
    {
      newTab[i] = tableau[i];
    }
    	
    	delete[] tableau;
    	tableau = newTab;
    	
    	if(tableau == nullptr)
    	{
    	return false;
    	}  
    	else 
    	{
    	return true;
    	}
    	  	 
}


void vecteur::vider() 
{
    delete[] tableau;
    tableau = new Forme *[capacity];
    taille=0;
}


bool vecteur::vecteur_vide() {
  
  if(taille == 0)
  {
  return true;
  }
  else
  {
  return false;
  }
  
}


bool vecteur::ajout(Forme* valeur)
{
	bool verification = true;
	
	
	if(taille==capacity)
	{
	 verification = add_capacity();
	}
	
	tableau[taille] = valeur;
	taille++;
	
	
	return verification;
		
}

Forme* vecteur::retrait(int index)
{
	if(index > capacity)
	{
		return nullptr;
	}
	else
	{
		Forme* ptrforme = tableau[index];
		
		for(int i = index; i < taille - 1; i++)
		{
			tableau[i] = tableau[i + 1];
		}
		
		taille--;
		return ptrforme;
	}
}


Forme* vecteur::obtenir(int index)
{
	Forme* ptrforme = tableau[index];
	
	if(index > taille)
	{
		return nullptr;
	}
	else
	{
		return ptrforme;
	}
}

void vecteur::afficher_vecteur(ostream & s)
{
	for(int i = 0; i < taille; i++)
	{
		tableau[i]->afficher(s);
	}
}






