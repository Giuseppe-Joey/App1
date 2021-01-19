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
   
   /*std::cout <<"Les formes"<<endl;
   std::cout << endl;
   
   Carre car(2,1,5);
   Rectangle rec(2,3,1,1);
   Cercle cer(2,1,1);
   
   car.afficher(std::cout);
   cer.afficher(std::cout);
   rec.afficher(std::cout);
   
   std::cout << endl;
   std::cout <<"________________________________"<<endl;*/

   
   
   
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur
   
   
   /*std::cout <<"Les vecteurs"<<endl;
   std::cout << endl;
   
   Vecteur v1;
   Carre c1(2,1,4);
   Rectangle r1(2,3,1,1);
   Rectangle r2(2,6,1,1);
   Cercle ce1(2,1,1);
   Cercle ce6(6,1,1);
   
   
   v1.ajout(&c1);
   v1.ajout(&r1);
   v1.ajout(&ce1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
   v1.ajout(&c1);
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
   std::cout <<"________________________________"<<endl;*/
   
   
}

void Tests::tests_unitaires_couche()
{
  /* std::cout <<"Les couches"<<endl;
   std::cout << endl;
   
   Couche c;
   Carre c1(4,1,4);
   Rectangle r1(2,3,1,1);
   Rectangle r2(2,6,1,1);
   Cercle ce1(2,1,1);
   Cercle ce6(6,1,1);
   
   c.SetEtat(Couche::Etat::Active);
   std::cout << c.SetEtat(Couche::Etat::Active) <<endl;
   
   c.AjoutForme(&c1);
   c.AjoutForme(&ce6);
   c.AjoutForme(&ce1);
   c.AjoutForme(&r2);
   c.afficher(std::cout);
   
   std::cout << c.getEtat() <<endl;
   
   c.RetireForme(1);
   c.afficher(std::cout);
   
   std::cout << endl;
   c.ObtenirForme(0)->afficher(std::cout);
   
   std::cout << endl;
   std::cout << c.aire() <<endl;
   
   std::cout << endl;
   c.Translater(4, 5);
   c.afficher(std::cout);
   
   std::cout << endl;
   //c.Translater(4, 5);
   std::cout << c.Translater(4, 5) <<endl;
   
   std::cout << endl;
   c.Reinitialiser();
   c.afficher(std::cout);
   
   
   std::cout << endl;
   std::cout <<"________________________________"<<endl;*/
   
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
   
   /*std::cout <<"Les Canevas"<<endl;
   std::cout << endl;
   
   Canevas ca;
   Carre c1(4,1,4);
   Rectangle r1(2,3,1,1);
   Rectangle r2(2,6,1,1);
   Cercle ce1(2,1,1);
   Cercle ce6(6,1,1);
   
   ca.afficher(std::cout);
   
   ca.activerCouche(0);
   ca.cacherCouche(2);
   
   std::cout << endl;
   ca.ajouterForme(&r2);
   ca.ajouterForme(&r1);
   ca.ajouterForme(&c1);
   ca.ajouterForme(&ce1);
   ca.afficher(std::cout);
   std::cout <<"++++++++++"<<endl;
   
   std::cout << endl;
   ca.retirerForme(0);
   ca.afficher(std::cout);
   
   std::cout << endl;
   ca.reinitialiser();
   std::cout << ca.reinitialiser() <<endl;
   ca.afficher(std::cout);
   
   std::cout << endl;
   ca.cacherCouche(2);
   std::cout << ca.cacherCouche(2) <<endl;
   ca.afficher(std::cout);
   
   std::cout <<"+LLLLLLLLLLLl"<<endl;
   std::cout << endl;
   std::cout << ca.translater(4, 5) <<endl;
   ca.afficher(std::cout);
   
   //std::cout <<"+LLLLLLLLLLLl"<<endl;
   //std::cout << endl;
   //std::cout << ca.aire() <<endl;
   
   std::cout << endl;
   std::cout <<"________________________________"<<endl;*/
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
   Canevas ca;
   Carre c1(4,1,4);
   Rectangle r1(2,3,5,6);
   Cercle ce1(2,7,10);
   
   Cercle ce6(6,1,1);
   
   Carre c2(6,2,4);
   Rectangle r2(1,10,2,7);
   Cercle ce3(7,0,3);

   
   
   cout << "TESTS APPLICATION (CAS 01)" << endl;
    
   std::cout <<"Scénario de validation"<<endl;
   std::cout << endl;
   
   //ca.afficher(std::cout);
   //std::cout << endl;
   
   std::cout <<"# 1 Activer la couche 1"<<endl;
   ca.activerCouche(1);
   std::cout << endl;
   
   std::cout <<"# 2 Ajouter 3 formes géométriques"<<endl;
   std::cout <<"Les formes ajoutés sont les suivante: carre c1(4,1,4) , rectangle (2,3,5,6), cercle (2,7,10)"<<endl;
   
   ca.ajouterForme(&c1);
   ca.ajouterForme(&r1);
   ca.ajouterForme(&ce1);
   std::cout << endl;
   std::cout << endl;
   
   std::cout <<"#3 Activer couche 2 "<<endl;
   ca.activerCouche(2);
   std::cout << endl;
   
   std::cout <<"#4 Ajouter une forme"<<endl;
   std::cout <<"La forme ajouté est :  cercle(6,1,1)"<<endl;
   ca.ajouterForme(&ce6);

   std::cout << endl;
   
   std::cout <<"#5 Afficher le canevas"<<endl;
   ca.afficher(std::cout);
   std::cout << endl;
   
   std::cout <<"#6 Aire du Canevas"<<endl;
   std::cout <<"l'aire est:"<<endl;
   std::cout << ca.aire() <<endl;
   std::cout << endl;
   
   std::cout <<"#7 Activer couche 0"<<endl;
   ca.activerCouche(0);
   std::cout << endl;
   
   std::cout <<"#8 Ajouter 3 formes géométriques différentes"<<endl;
   std::cout <<"Les formes ajoutés sont les suivante:carre(6,2,4), rectangle(1,10,2,7), cercle(7,0,3);"<<endl;
   ca.ajouterForme(&c2);
   ca.ajouterForme(&r2);
   ca.ajouterForme(&ce3);
   std::cout << endl;
   
   std::cout <<"#9 Cacher la couche 2"<<endl;
   ca.cacherCouche(2);
   std::cout << endl;
   
   std::cout <<"#10 Activer la couche 1"<<endl;
   ca.activerCouche(1);
   std::cout << endl;
   
   std::cout <<"#11 Translater la couche 1"<<endl;
   std::cout <<"les valeurs utiliser sont x=4, y=5"<<endl;
   ca.translater(4, 5);
   std::cout << endl;
   
   std::cout <<"# 12 Afficher le canevas"<<endl;
   ca.afficher(std::cout);
   std::cout << endl;
   
   std::cout <<"#13 Aire du Canevas"<<endl;
   std::cout <<"l'aire est:"<<endl;
   std::cout << ca.aire() <<endl;
   std::cout << endl;

   std::cout <<"# 14 Retirer la première forme de la couche"<<endl;
   ca.retirerForme(0);
   std::cout << endl;
   
   std::cout <<"# 15 Afficher le canevas"<<endl;
   ca.afficher(std::cout);
   std::cout << endl;
   
   std::cout <<"#16 Aire du Canevas"<<endl;
   std::cout <<"l'aire est:"<<endl;
   std::cout << ca.aire() <<endl;
   std::cout << endl;
   
   std::cout <<"#17 Réinitialiser le canevas"<<endl;
   ca.reinitialiser();
   std::cout << endl;
   
   std::cout <<"#18 Afficher le canevas"<<endl;
   ca.afficher(std::cout);
   std::cout << endl;
   
   std::cout <<"# 19 Aire du Canevas"<<endl;
   std::cout <<"l'aire est:"<<endl;
   std::cout << ca.aire() <<endl;
   std::cout << endl;
   
   
   std::cout <<"FIN DU PROGRAMME"<<endl; 
    
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
