CC=g++

# Dependências
all: grafos

grafos: main.cpp
	$(CC) main.cpp service/LeitorDeArquivo.cpp service/LeitorDeArquivo.h service/ImpressorDeMatriz.cpp service/ImpressorDeMatriz.h calculadora/FloydWarshall.cpp calculadora/FloydWarshall.h service/EscritorDeArquivo.cpp service/EscritorDeArquivo.h -std=c++17 -o grafos

clean:
	rm grafos