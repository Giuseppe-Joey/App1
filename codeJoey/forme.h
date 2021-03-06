/********
 * Fichier: forme.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration des classes de formes geometriques. La
 *    classe Forme ne doit pas etre modifiee. Ce fichier fait partie de
 *    la distribution de Graphicus.
********/

#ifndef FORME_H
#define FORME_H

#include <iostream>
#include "coordonnee.h"

class Forme
{
public:
  Forme(int x = 0, int y = 0);
  virtual ~Forme();
  void translater(int deltaX, int deltaY);
  Coordonnee getAncrage();
  void setAncrage(Coordonnee c);
  virtual double aire() = 0;
  virtual void afficher(std::ostream& s) = 0;
protected:
	Coordonnee ancrage;
};





class Carre : public Forme
{
	private;
	int base;

	public:
	Carre();
	Carre(int base);
	~Carre();

	double aire();
	void afficher(std::ostream& s);
	void changerDimension(int base);
	int getSize();
};





class Rectangle : public Forme
{

	private:
	int hauteur;
	int largeur;



	public:
	Rectangle();
	Rectangle(int hauteur, int largeur);
	~Rectangle();

	double aire();
	void afficher(std::ostream& s);
	void changerDimension(int hauteur, int largeur);
	int getSize();


};







class Cercle : public Forme
{

	private:
	int rayon;

	public:
	Cercle();
	Cercle(int rayon);
	~Cercle();

	double aire();
	void afficher(std::ostream& s);
	void changerDimension(int rayon);
	int getSize();

};
#endif
