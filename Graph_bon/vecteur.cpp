/********
 * Fichier: vecteur.cpp
 ********/

#include "rectangle.h"
#include <iostream>

using namespace std;

vecteur::vecteur() {
  taille = 0;
  capacity 10;
  tableau = new forme[10];
}

vecteur::~vecteur() {}

int vecteur::get_capacity() { return capacity; }

int vecteur::get_size() { return taille; }

void vecteur::add_capacity(int newCapacity) {
  forme *newtab = new forme[newCapacity];

  if (taille > newCapacity) {
    return 0;

  } else {
    for (int i = 0; i < taille; i++) {
      newtab[i] = tab[i];
    }

    delete[] tableau;
    tableau = newTab;
    // return tab;
  }
}

void vecteur::vider_vecteur() {
  for (int i = 0; i > taille; i++) {
    delete[i];
  }
}






bool vecteur::vecteur_vide() {
  return taille == 0;
}
