#include "vecteur.h"
#include <iostream>



/*******************************************************************/

Vecteur::Vecteur()
{
    tableau = new Forme*[capacite];
}

/*******************************************************************/

Vecteur::~Vecteur()
{
    viderVecteur();
    delete[] tableau;
}

/*******************************************************************/
void Vecteur::ajoutFin(Forme* valeur)
{

    if(nbElem == capacite)
    {
        doublerCapacite();
    }

    tableau[nbElem] = valeur;
    nbElem++;
}

/*******************************************************************/

void Vecteur::doublerCapacite()
{
    Forme** variable = tableau;    // Fait une copie de tous les elements de tableau dans variable
    tableau          = new Forme*[capacite * 2];

    for(int i = 0; i < nbElem; i++)
    {
        variable[i] = tableau[i];
    }

    // on va doubler la capacite de tableau  et deleter les valeurs dans la
    // variable

    delete[] variable;
}

/*******************************************************************/

Forme* Vecteur::retrait(int place)
{
    if(place > capacite)
    {
        return nullptr;
    }

    Forme* ptrCpy = tableau[place];

    for(int i = place; i < nbElem - 1; i++)
    {
        tableau[i] = tableau[i + 1];
    }

    return ptrCpy;
}

/*******************************************************************/

void Vecteur::retraitFin()
{
    Forme* ptrCpy = tableau[nbElem];

    delete tableau[nbElem - 1];
}

/*******************************************************************/

int Vecteur::get_nbElem()
{
    return nbElem;
}

/*******************************************************************/

int Vecteur::get_capacite()
{
    return capacite;
}

/*******************************************************************/

bool Vecteur::taille0()
{
    return nbElem == 0;
}

/*******************************************************************/

Forme* Vecteur::check(int num)
{
    return tableau[num];
}

/*******************************************************************/

void Vecteur::printVecteur()
{
    for(int i = 0; i < nbElem; i++)
        cout << "[" << tableau[i] << "]" << endl;
}

/*******************************************************************/

void Vecteur::viderVecteur()
{
    for(int i = 0; i < nbElem; i++)
    {
        delete tableau[i];
    }

    nbElem = 0;
}

/*******************************************************************/
