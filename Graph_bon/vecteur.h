/********
 * Fichier: vecteur.h
 ********/

#include "fomre.h"
#include <iostream>

using namespace std;

class vecteur : public forme {

private:
  // atribut

  int taille;
  int capacity;
  forme **tableau;

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
