#makefile 
graphicus-01: graphicus-01.o tests.o forme.o couche.o canevas.o rectangle.o carre.o vecteur.o
	g++ -o graphicus-01 graphicus-01.o tests.o forme.o couche.o canevas.o rectangle.o carre.o  vecteur.o

graphicus-01.o: graphicus-01.cpp tests.h canevas.h forme.h couche.h coordonnee.h
	g++ graphicus-01.cpp -g -c

tests.o: tests.cpp tests.h canevas.h forme.h couche.h coordonnee.h
	g++ tests.cpp -g -c
	
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
	
couche.o: couche.cpp couche.h 
	g++ couche.cpp -g -c
	
canevas.o: canevas.cpp canevas.h forme.h couche.h coordonnee.h
	g++ canevas.cpp -g -c
	
rectangle.o: rectangle.cpp rectangle.h forme.h coordonnee.h
	g++ rectangle.cpp -g -c
	
carre.o: carre.cpp carre.h forme.h coordonnee.h
	g++ carre.cpp -g -c
	
#cercle.o: cercle.cpp cercle.h forme.h coordonnee.h
#	g++ cercle.cpp -g -c
	
vecteur.o: vecteur.cpp vecteur.h forme.h 
	g++ vecteur.cpp -g -c
clean:
	rm -f *.o
# fin du makefile
