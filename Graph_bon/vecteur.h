/********
 * Fichier: vecteur.h
 ********/

#include "forme.h"
#include <iostream>

using namespace std;

class vecteur 
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
