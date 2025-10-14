//
// Created by robson on 14/10/2025.
//

#include "GeradorGraphviz.h"

void gerarArquivoGraphviz(string path) {
    ifstream input(path);
    ofstream output("Graphviz.dot");

    if (!input.is_open()) {
        cerr << "Erro ao abrir " << path << "\n";
        return;
    }

    vector<vector<string>> dist;
    string value;
    string line;

    while (getline(input, line)) {
        vector<string> row;
        string temp;
        for (char c : line) {
            if (c == ' ') {
                if (!temp.empty()) {
                    row.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += c;
            }
        }
        if (!temp.empty()) row.push_back(temp);
        dist.push_back(row);
    }

    int n = dist.size();

    output << "digraph G {\n";
    output << "    rankdir=LR;\n";
    output << "    node [shape=circle, style=filled, color=lightblue];\n";

    for (int i = 0; i < n; i++) {
        output << "    " << i << " [label=\"V" << i << "\"];\n";
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] != "INF" && i != j) {
                output << "    " << i << " -> " << j
                       << " [label=\"" << dist[i][j] << "\"];\n";
            }
        }
    }

    output << "}\n";
    output.close();

    cout << "\nArquivo 'Graphviz.dot' gerado com sucesso!\n";
}