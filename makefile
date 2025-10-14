CC=g++

# Dependências
all: grafos

grafos: main.cpp
	$(CC) main.cpp service/LeitorDeArquivo.cpp service/LeitorDeArquivo.h service/ImpressorDeMatriz.cpp service/ImpressorDeMatriz.h calculadora/FloydWarshall.cpp calculadora/FloydWarshall.h service/EscritorDeArquivo.cpp service/EscritorDeArquivo.h service/GeradorGraphviz.h service/GeradorGraphviz.cpp  -std=c++17 -o grafos

clean:
	rm grafos