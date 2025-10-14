//
// Created by guilherme on 03/10/2025.
//

#include "FloydWarshall.h"

void floydWarshall(const vector<vector<int>> &grafo) {
    unsigned tamanho = grafo.size();

    vector<vector<int>> grafoD = grafo;

    for (int k = 0; k < tamanho; ++k) {
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < tamanho; ++j) {
                if (grafoD[i][k] != INF && grafoD[k][j] != INF && grafoD[i][k] + grafoD[k][j] < grafoD[i][j]) {
                    grafoD[i][j] = grafoD[i][k] + grafoD[k][j];
                }
            }
        }
    }

    imprimirMatriz(grafoD);
    gerarArquivoGraphviz("MatrizDistânciaMínima.txt");
}