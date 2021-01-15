#makefile pour Tableauentiers
#le 12 janvier 2021
#But principale
#	compiler tableau dentier
#But secondaire 
#	clean
#
#
FROMAGIOOSSS: TableauEntier.o test-TableauEntier.o 
	g++ -o FROMAGIOOSSS TableauEntier.o test-TableauEntier.o 
#
TableauEntier.o: TableauEntier.cpp TableauEntier.h
	g++ TableauEntier.cpp -g -c
#
test-TableauEntier.o: test-TableauEntier.cpp TableauEntier.h
	g++ test-TableauEntier.cpp -g -c
#
clean:
	rm	-f *.o
#
#fin du makefile
#

