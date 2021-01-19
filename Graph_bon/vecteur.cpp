/********
 * Fichier: vecteur.cpp
 ********/

#include "vecteur.h"
#include <iostream>

using namespace std;

Vecteur::Vecteur() 
{
  taille = 0;
  capacity = 10;
  tableau = new Forme*[capacity];
}

Vecteur::~Vecteur() 
{
vider();
delete[] tableau;
}

int Vecteur::get_capacity() 
{ 
return capacity; 
}

int Vecteur::get_size() 
{ 
return taille; 
}

bool Vecteur::add_capacity() 
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


void Vecteur::vider() 
{
    delete[] tableau;
    tableau = new Forme *[capacity];
    taille=0;
}


bool Vecteur::vecteur_vide() {
  
  if(taille == 0)
  {
  return true;
  }
  else
  {
  return false;
  }
  
}


bool Vecteur::ajout(Forme* valeur)
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

Forme* Vecteur::retrait(int index)
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


Forme* Vecteur::obtenir(int index)
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

void Vecteur::afficher_vecteur(ostream & s)
{
	for(int i = 0; i < taille; i++)
	{
		tableau[i]->afficher(s);
	}
}






