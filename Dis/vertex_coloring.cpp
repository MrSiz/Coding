httpwww.geeksforgeeks.orggraph-coloring-set-2-greedy-algorithm

#include iostream
#include list
#include vector

using namespace std;

class Graph{
	int V;
	listint adj;
public
	Graph(int V){
		this-V = V;
		adj = new listint[V];
	}
	~Graph(){
		delete[] adj;
	}
	void addEdge(int v, int w){
		adj[v].push_back(w);
		adj[w].push_back(v);
	}
	void greedyColoring(){
		vectorint result(V, 0);
		
		for (int u = 1; u  V; ++u){
			result[u] = -1;
		}
		
		vectorbool available(V);
		
		for (int cr = 0; cr  V; ++cr){
			available[cr] = false;
		}
		
		for (int u = 1; u  V; ++u){
			listintiterator i;
			for (i = adj[u].begin(); i != adj[u].end();++i){
				if (result[i] != -1){
					available[result[i]] = true;
				}
			}
			
			int cr;
			for (cr = 0; cr  V; ++cr){
				if (available[cr] == false){
					break;
				}
			}
			
			result[u] = cr;
			
			for (i = adj[u].begin(); i != adj[u].end(); ++i){
				if (result[i] != -1){
					available[result[i]] = false;
				}
			}
		}
		
		
		for (int u = 0; u  V; ++u){
			cout  Vertex   u   --- Color
				  result[u]  endl;
		}
	}
};


int main()
{
	Graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(1, 3);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);
    cout  Coloring of graph 1 n;
    g1.greedyColoring();
 
    Graph g2(5);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 2);
    g2.addEdge(1, 4);
    g2.addEdge(2, 4);
    g2.addEdge(4, 3);
    cout  nColoring of graph 2 n;
    g2.greedyColoring();
 
    return 0;
}

