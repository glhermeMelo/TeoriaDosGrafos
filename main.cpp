#include "calculadora/FloydWarshall.h"
#include "service/LeitorDeArquivo.h"

int main() {
    vector<vector<int>> grafo = leitorDeArquivoTXT("grafo.txt");

    floydWarshall(grafo);

    return 0;
}