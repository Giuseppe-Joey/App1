/********
 * Fichier: vecteur.h
********/



class vecteur
{
	public:
	int x;
	int y;
	int z;
	
	
	vecteur()
	{
		std::cout << "Construction de Vecteur a l'adresse : " << this << std::endl;
	}
	
	~vecteur()
	{
		std::cout << "Destruction de Vecteur a l'adresse : " << this << std::endl;
	}	

};
