#makefile pour Evaluation
#le 12 janvier 2021
#but principale
#	compiler Evaluation
#but secondaire
#	clean
#
#
TACOOOSSS: Evaluation.o EvaluationChoixMultiples.o EvaluationReussiEchec.o test-evaluation.o
	g++ -o TACOOOSSS Evaluation.o EvaluationChoixMultiples.o EvaluationReussiEchec.o test-evaluation.o
#
Evaluation.o: Evaluation.cpp Evaluation.h
	g++ Evaluation.cpp -g -c
#
EvaluationChoixMultiples.o: EvaluationChoixMultiples.cpp EvaluationChoixMultiples.h
	g++ EvaluationChoixMultiples.cpp -g -c
#
test-evaluation.o: test-evaluation.cpp EvaluationChoixMultiples.h
	g++ test-evaluation.cpp -g -c
#
EvaluationReussiEchec.o: EvaluationReussiEchec.cpp EvaluationReussiEchec.h
	g++ EvaluationReussiEchec.cpp -g -c
#
clean:
	rm	-f *.o
#
#fin du make
# 
