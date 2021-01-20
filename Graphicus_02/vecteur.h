/********
 * Fichier: vecteur.h
 ********/

#ifndef VECTEUR_H
#define VECTEUR_H

#include "forme.h"
#include <iostream>

using namespace std;

class Vecteur 
{

private:
  // atribut

  int taille;
  int capacity;
  Forme **tableau;

public:
  // constructeur
  Vecteur();
  ~Vecteur();

  // method
  int get_capacity();
  int get_size();
  bool add_capacity();
  void vider();
  bool vecteur_vide();
  bool ajout(Forme* valeur);
  Forme* retrait(int index);
  Forme* obtenir(int index);
  void afficher_vecteur(ostream & s);
};

#endif
