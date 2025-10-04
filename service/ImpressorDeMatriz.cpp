//
// Created by guilherme on 03/10/2025.
//

#include "ImpressorDeMatriz.h"

void imprimirMatriz(const vector<vector<int>> &grafoD) {
    unsigned int tamanho = grafoD.size();

    cout << "Matriz de distâncias mínimas entre os vértices" << endl;
    cout << " ";
    for (int i = 0; i < tamanho; i++) {
        cout << setw(5) << i;
    }

    cout << "\n-----------------------\n";

    for (int i = 0; i < tamanho; i++) {
        cout << i << " |";
        for (int j = 0; j < tamanho; j++) {
            if (grafoD[i][j] == INF)
                cout << setw(5) << "INF";
            else
                cout << setw(5) << grafoD[i][j];
        }

        cout << "\n";
    }
}