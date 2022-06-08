#include<iostream>		//UAS STRUKTUR DATA_AISYAH AQILAH_002
#define Max 100

using namespace std;

int adjMat[Max][Max];

 // install matrix to zero
void initializeMat(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int j = 0; j < v; j++ )
	    { 
	    adjMat[i][j] =0;
		}
	}
}

 // add edges
void addEdge(int u, int v, int w)
{
	adjMat[u][v] = w;
	adjMat[v][u] = w;
}

// print the matrix
void displayMat(int v)
{
    
	for (int i = 1; i <= v; i++)
	{
		cout << "\t";
		
		for (int j = 1; j <= v; j++)
		{
			cout << adjMat[i][j] <<"\t";
		}
		
		cout << endl;
	}
}

int main()
{
	// add number of vertices 
	int vertice = 4;
	
	initializeMat(vertice);
	// add numbers edge
	addEdge(1,2,5);
	addEdge(2,3,1);
	addEdge(4,1,3);
	addEdge(2,4,1);
	addEdge(3,1,1);
	
	displayMat(vertice);
	
	return 0;
}
