/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
   
   std::cout <<"Les formes"<<endl;
   std::cout << endl;
   
   carre car(2,1,4);
   rectangle rec(2,3,1,1);
   cercle cer(2,1,1);
   
   car.afficher(std::cout);
   cer.afficher(std::cout);
   rec.afficher(std::cout);
   
   std::cout << endl;
   std::cout <<"________________________________"<<endl;

   
   
   
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
   
   
   std::cout <<"Les vecteurs"<<endl;
   std::cout << endl;
   
   vecteur v1;
   carre c1(2,1,4);
   rectangle r1(2,3,1,1);
   rectangle r2(2,6,1,1);
   cercle ce1(2,1,1);
   cercle ce6(6,1,1);
   
   
   v1.ajout(&c1);
   v1.ajout(&r1);
   v1.ajout(&ce1);
   v1.afficher_vecteur(std::cout);
   v1.vider();
   std::cout << v1.vecteur_vide() <<endl;
   
   v1.ajout(&r1);
   v1.ajout(&c1);
   v1.ajout(&r2);
   v1.ajout(&ce1);
   v1.afficher_vecteur(std::cout);
   std::cout<<endl;
   
   v1.obtenir(3)->afficher(std::cout);
   std::cout << endl;
   
   v1.retrait(1);
   v1.afficher_vecteur(std::cout);
   std::cout << endl;
   
   v1.vider();
   v1.ajout(&ce6);
   v1.afficher_vecteur(std::cout);
   
   std::cout << endl;
   std::cout <<"________________________________"<<endl;
   
   
}

void Tests::tests_unitaires_couche()
{
   std::cout <<"Les couches"<<endl;
   std::cout << endl;
   
   Couche c;
   carre c1(2,1,4);
   rectangle r1(2,3,1,1);
   rectangle r2(2,6,1,1);
   cercle ce1(2,1,1);
   cercle ce6(6,1,1);
     
   c.AjoutForme(&c1);
   c.afficher(std::cout);
   
   std::cout << c.getEtat() <<endl;
   
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
