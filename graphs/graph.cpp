// source code for graphs for my machine learning c++ backend
// author: rohan singh
// if you're looking at this code, you need to see a therapist


// imports
#include <iostream>
#include <cstdlib>


// change this to a more suitable if you are not using a simple macbook like i am 
#define MAX_NODES 10000


using namespace std;




// class for attributes, in case we have non-homogenous graphs
class Attribute{
	
	public:
		
	// for the attributes that are well known
	float* attributes;
		
	// for the hidden attributes (most probably a label)
	auto* hidden_attributes;

	int num_attributes;
	int num_hidden_attributes;


	// constructor (hammer hammer)
	Attribute(float* attributes, auto* hidden_attributes, int x, int y){
		this->attributes = attributes;
		this->hidden_attributes = hidden_attributes;
		this->num_attributes = x;
		this->num_hidden_attributes = y;
	}


}





// class for vertices, feel free to add some stuff if you want to customize it
class Vertex{
	
	public:

		// attributes for the vertex
		Attribute* vertex_attribute;
		
		// degree for the vertex
		int degree;
		
		// index for the vertex in the adjacency matrix
		int index;

		
		// slice of the adjacency matrix (it holds the vertex indices)
		int neighbors[MAX_NODES];

		
		// construction major
		Vertex(Attribute* attributes){
			this->vertex_attribute = attributes;
		}

		
		// function to add a neighbor
		void addNeighbor(Vertex othervertex){
			this->degree++;
			this->neighbors[othervertex->index]++;
		}

}





// class for the graph 
class Graph{
	


	public:
		
		// number of nodes but more math-y and fancy
		int cardinality;

		// number of edges
		int size;


		// ADJ matrix
		Vertex vertices[MAX_NODES];

		
		// constructore
		Graph(){
			this->cardinality = 0;
			this->size = 0;
		}

		
		// function to add a vertex
		void addVertex(Attribute* attr){
			vertices[cardinality] = new Vertex(attr); 
			this->cardinality++;
		}


		// function to print the graph
		void printGraph(){
			
			Vertex* temp = malloc(sizeof(Vertex));
			for(int i = 0; i <= this->cardinality; i++){
				cout<<"Vertex "<<i<<" properties:\n";
				temp = this->vertices[i];
				for(int j = 0; j < temp->num_attributes; j++){
					cout<<"\tAttribute
				}
			}

		}



	
}

