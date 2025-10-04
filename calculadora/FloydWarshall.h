//
// Created by guilherme on 03/10/2025.
//

#ifndef TEORIADOSGRAFOS_FLOYDWARSHALL_H
#define TEORIADOSGRAFOS_FLOYDWARSHALL_H
#include <iostream>
#include <vector>
#include <iomanip>
#include "../service/ImpressorDeMatriz.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::setw;

void floydWarshall(const vector<vector<int>> &grafo);

#endif //TEORIADOSGRAFOS_FLOYDWARSHALL_H