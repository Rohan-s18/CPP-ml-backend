// imports 


#include <iostream>


class Vector{

	private:

		double* data;
		int len;
		int capacity;

		
    	void resize(int new_capacity) {
        	double* new_data = new double[new_capacity];
        	for (int i = 0; i < len; i++) 
            	new_data[i] = data[i];
        	delete[] data;
        	data = new_data;
        	capacity = new_capacity;
    	}


	public:

		Vector() : data(nullptr), len(0), capacity(0) {}

		Vector(double input_data[], int input_len) : len(input_len), capacity(input_len) {
        	data = new double[capacity];
        	for (int i = 0; i < len; i++) 
            	data[i] = input_data[i];
        
		}

		~Vector() {
        	delete[] data;
    	}

    	void add(double input_data) {
        	if (len == capacity) {
            	int new_capacity = (capacity == 0) ? 1 : capacity * 2;
            	resize(new_capacity);
       		}
        	data[len] = input_data;
        	len++;
    	}



	 	void replace(int index, double input_data) {
        	if (index >= 0 && index < len) 
            	data[index] = input_data;
        }

    	void show() {
        	for (int i = 0; i < len; i++) 
            	std::cout << data[i] << " ";
        
        	std::cout << std::endl;
    	}
};



int main() {
    std::cout << "Hello World!\n";

    Vector demo;

    demo.add(4.5);
    demo.add(-1.6);
    demo.add(3.3);

    demo.show();

    return 0;
}