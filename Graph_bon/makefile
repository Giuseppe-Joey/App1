#***********************************
#Makefile de Graphicus-01
#Date de creation:
#	le 13 janvier 2021
#
#Derniere mise a jour:
#	le 16 Janvier 2021
# 
#But premier
#	compiler graphicus-01
#But secondaire
#	clean
#************************************
#
#
#
EXECUTABLE: canevas.o couche.o forme.o graphicus-01.o tests.o carre.o cercle.o rectangle.o vecteur.o
	g++ -o  EXECUTABLE canevas.o couche.o forme.o graphicus-01.o tests.o carre.o cercle.o rectangle.o vecteur.o
#
canevas.o: canevas.cpp canevas.h forme.h couche.h coordonnee.h
	g++  canevas.cpp -g -c
#
couche.o: couche.cpp couche.h 
	g++ couche.cpp -g -c
#
forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c
#
graphicus-01.o: graphicus-01.cpp  tests.h canevas.h forme.h couche.h coordonnee.h
	g++ graphicus-01.cpp -g -c
#
tests.o: tests.cpp tests.h canevas.h forme.h couche.h coordonnee.h
	g++ tests.cpp -g -c
#
carre.o: carre.cpp carre.h coordonnee.h rectangle.h forme.h
	g++ carre.cpp -g -c
#
cercle.o: cercle.cpp cercle.h coordonnee.h forme.h
	g++ cercle.cpp -g -c
#
rectangle.o: rectangle.cpp rectangle.h coordonnee.h forme.h
	g++ rectangle.cpp -g -c
#
vecteur.o: vecteur.cpp vecteur.h forme.h coordonnee.h rectangle.h
	g++ vecteur.cpp -g -c
#
clean:
	rm	-f *.o
#
# fin du makefile
#
