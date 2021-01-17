/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include <iostream>
#include "forme.h"
#include "vecteur.h"

using namespace std;

class Couche 
{
    public:
	
	enum Etat
    	{
        Initialisee,
        Active,
        Inactive,
        Cachee
    	};

    private:
    	vecteur v;
    	Etat unEtat;
    	
    public:
     
    Couche();
    ~Couche();
    
    // method
    bool AjoutForme(Forme* f);
    Forme* RetireForme(int index);
    Forme* ObtenirForme(int index);
    double Aire();
    bool Translater(int x, int y);
    bool Reinitialiser();
    void SetEtat(Etat lEtat);
    Etat getEtat();
    void afficher(ostream& s);
        
};

#endif
