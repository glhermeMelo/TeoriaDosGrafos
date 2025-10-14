//
// Created by guilherme on 03/10/2025.
//

#ifndef TEORIADOSGRAFOS_IMPRESSORDEMATRIZ_H
#define TEORIADOSGRAFOS_IMPRESSORDEMATRIZ_H
#include <format>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::setw;
using std::ofstream;

constexpr int INF = 100000000;

void imprimirMatriz(const std::vector<vector<int>> &grafoD);

#endif //TEORIADOSGRAFOS_IMPRESSORDEMATRIZ_H

