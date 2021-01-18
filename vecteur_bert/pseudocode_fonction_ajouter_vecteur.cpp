//i (int ):= compteur
//tableau(Pointeur de Forme pointeur) : vecteur contenant les dessins
//newTab (pointeur de Forme pointeur) : copie de tableau ayant le même type que tableau
//verification(bool) : variable qui contien la valeur 1
//taille(int) : nb_d'elements dans le tableau
//capcite(int) : taille du tableau


DEBUT
	
	verification := true;
	
	SI taille = capacite  ALORS
	
		verification = add_capacity();
	
	{
		newTab(Forme**) := Forme*[capacite *2](new Forme*);  //création de newTab dans la heap qui est de même type que le tableau,
								       // puis doubler la capacite du tableau
		
		POUR i := 1 À taille PAR PAS DE 1
		
		{
			newTab[i] := tableau[i]; //newTab devient une copie du tableau
		}
		
		delete[] tableau; //détruit toute les valeurs du tableau
		
		tableau = newTab  //le tableau copie le valeurs de newTab
		
		SI tableau = nullptr	ALORS
			
			retourner 0;
			
		SINON
		
			retourner 1;
	}
	
	tableau[taille] := valeur;
	
	taille := taille + 1;
	
FIN
