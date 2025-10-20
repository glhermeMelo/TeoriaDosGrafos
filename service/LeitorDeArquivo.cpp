//
// Created by guilherme on 03/10/2025.
//

#include "LeitorDeArquivo.h"
#include "ImpressorDeMatriz.h"

vector<vector<int>> leitorDeArquivoTXT(string path) {
    ifstream arquivo(path);

    if (!arquivo.is_open()) {
        cerr << "Erro: Nao foi possivel abrir o arquivo " << path << endl;
        return {};
    }

    vector<vector<int>> grafo;
    string linha;
    int tamanho = 0;
    bool tamanhoDefinido = false;

    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string token;
        vector<int> linhaDoGrafo;
        int contadorColunas = 0;

        while (ss >> token) {
            if (token == "INF") {
                linhaDoGrafo.push_back(INF);
            } else {
                linhaDoGrafo.push_back(stoi(token));
            }
            contadorColunas++;
        }

        if (!linhaDoGrafo.empty()) {
            if (!tamanhoDefinido) {
                // Calcula o tamanho da matriz a partir da primeira linha
                tamanho = contadorColunas;
                tamanhoDefinido = true;
            }

            // Garante que a matriz é quadrada
            if (contadorColunas != tamanho) {
                std::cerr << "Erro: A matriz no arquivo nao e quadrada." << std::endl;
                return {}; // Retorna vazio
            }
            grafo.push_back(linhaDoGrafo);
        }
    }
    arquivo.close();

    if (grafo.size() != static_cast<size_t>(tamanho) && tamanhoDefinido) {
        std::cerr << "Erro: O numero de linhas e colunas nao corresponde." << std::endl;
        return {};
    }

    return grafo;
}
