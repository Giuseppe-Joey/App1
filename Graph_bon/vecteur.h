/********
 * Fichier: vecteur.h
 ********/

#include "forme.h"
#include <iostream>

using namespace std;

class vecteur : public Forme 
{

private:
  // atribut

  int taille;
  int capacity;
  Forme **tableau;

public:
  // constructeur
  vecteur();
  ~vecteur();

  // fonction
  int get_capacity();
  int get_size();
  void add_capacity();
  void vider_vecteur();
  bool vecteur_vide();
};
