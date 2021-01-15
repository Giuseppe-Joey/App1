#makefile de l'atelier
#le 12 janvier 2021
#but principale
#construire latelier
#but secondaire
#clean
#
#
POTATO: pr13p4.o rectangle.o
	g++ -o POTATO pr13p4.o rectangle.o
#
pr13p4.o: pr13p4.cpp rectangle.h
	g++ pr13p4.cpp -g -c
#
rectangle.o: rectangle.cpp rectangle.h
	g++ rectangle.cpp -g -c
#
clean:
	rm	-f *.o
#
#fin du makefile
#
