# 🧩 Algoritmo de Caminho Mínimo - Floyd Warshall

O algoritmo de **Floyd–Warshall** é um método clássico para encontrar o caminho mínimo entre todos os pares de vértices em um grafo ponderado (com pesos nas arestas). Ele funciona tanto para grafos direcionados quanto não direcionados, desde que não contenham ciclos de peso negativo.

## 🚀 Tecnologias Utilizadas

- **C++17**
- **GNU Make** (opcional, para automação da compilação)
- **Linux / WSL / macOS** (recomendado)

## ⚙️ Instalação e Configuração

No **Debian/Ubuntu**:

```bash
sudo apt update
sudo apt install g++ make
``` 
## 🏗️ Compilação

Após a instalação da dependências, rode o seguinte comando:

```bash
make
```

## ▶️ Como Executar

Para rodar o algoritmo sobre o grafo descrito em  `grafo.txt`, use:

```bash
./grafos grafo.txt
```

## 🧪 Testes

Para testar com outros grafos, basta modificar o arquivo `grafo.txt` ou criar um novo `.txt` com o grafo desejado e executar:

```bash
./grafos nome_do_arquivo.txt
```