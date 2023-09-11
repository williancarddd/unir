#include <bits/stdc++.h>


/**
 * @brief 
 * 4 4
0 3
0 1
3 1
1 2
 * 
 */
using namespace std;

class Graph
{
public:
    int n; // Número de vértices
    vector<int> *adj;
    bool is_undirected;

    bool *visited = NULL; // visited[i] = true se e somente se nós já visitámos o vértice i

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->adj = new vector<int>[n];
        this->is_undirected = is_undirected;
    }

    void add_edge(int u, int v)
    {
        this->adj[u].push_back(v);
        if (this->is_undirected)
        {                        // Se o grafo não for direcionado
            this->adj[v].push_back(u); // Nós adicionamos a aresta de v para u
        }
    }

    int count_components()
    {
        delete this->visited; // Deleta o vetor anterior da memória. Isso é importante no caso que count_components é chamada múltiplas vezes
        this->visited = new bool[this->n];

        int qtd_components = 0; // Guarda a quantidade de componentes do nosso grafo

        for (int i = 0; i < n; i++)
        {
            if (!this->visited[i])
            {
                this->dfs(i); // Marca todos os vértices que estão na mesma componente o i-ésimo vértice
                qtd_components++;
            }
        }

        return qtd_components;
    }

    void dfs(int current)
    {
        this->visited[current] = true;

        for (int x = 0; x < this->adj[current].size(); x ++){
            int nex = this->adj[current][x];
            if(!this->visited[nex] ){
                dfs(nex);
            }
        }
    }

    void bfs(int s) {
        this->visited = new bool[this->n];
        queue<int> q;
        this->visited[s] = true;
        q.push(s);
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            cout << " " << v;
            for(int x = 0; x < this->adj[v].size(); x++){
                int w = this->adj[v][x];
                if(!this->visited[w]) {
                    this->visited[w] = true;
                    q.push(w);

                }
            }
        }
        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;

    // Lê o número de vértices e o número de arestas respectivamente
    cin >> n >> m;

    Graph graph(n);

    for (int i = 0; i < m; i++)
    {
        int U, V;

        // Lê a descrição de uma aresta
        cin >> U >> V;

        graph.add_edge(U, V);
    }

    graph.bfs(1);

    return 0;
}