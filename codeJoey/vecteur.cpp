


#include <iostream>
#include "vecteur.h"




/*************************************************/
Vecteur::Vecteur()
{
	tableau = new Forme* [capacity];
}

/*************************************************/
Vecteur::~Vecteur()
{

}

/*************************************************/
int Vecteur::afficherCapacity()
{
	return capacity;
}

/*************************************************/ 
int Vecteur::afficherTaille()
{
	return taille;
}

/*************************************************/ 
int Vecteur::doublerCapacity()
{
	return 2*capacity;
}

/*************************************************/ 
void viderVecteur()
{
	if(capacity != 0)
	taille = 0;
}

/*************************************************/ 
bool siVide()
{

	if(taille == 0)
	{
		return true;
	}

	return false;
}

/*************************************************/ 
bool ajouterForme(Forme* forme)
{
	if(taille == capacity)
        {
        	doublerCapacity();
	}

	for (int i = 0; i < capacity; i++)
	{
		if(tableau[i] == 0)
		{
			tableau[i] = forme;
			return true;
		}
	}

	return false;
}

/*************************************************/ 
Forme* retraitForme(int index)
{

	if(index > capacity || index < 0)
	{
		return NULL;
	}

	Forme* tampon;
	tampon = tableau[index];

	for (int i = index; i < capacity; i++)
	{
		tableau[i] = tableau[i + 1];
	}

	taille --;
	return tampon;
}

/*************************************************/ 
Forme* obtenirForme(int index)
{
	if(index > capacity || index < 0)
	{
		return NULL;
	}

	Forme* tampon;
	tampon = tableau[index];

	return tampon;
}

/*************************************************/ 
void afficher(int flot)
{
	for (int i = 0; i < capacity; i++)
	{
		std::cout << "Element a la position" << i << "est : " << tableau[i] <<  std::endl;
		std::cout << "A lendroit :" << this << std::endl;
	}
}

/*************************************************/ 

