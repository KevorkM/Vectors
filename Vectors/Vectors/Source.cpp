/*#include <iostream>
#include <vector>

using namespace std;

int main() {

	cout << " Vectors" << endl;

	vector<int> intVec; // vector<int> is the type of vector

	intVec.reserve(20);
	intVec.push_back(5);// adds 5 to the end of the vector

//	cout << "The size of the vector: " << intVec.size() << endl; // output 1
//	cout << "The capasity of the vector: " << intVec.capacity() << endl; // the output depends on the reserve

	for (int i = 0; i < 20; i++) {
		intVec.push_back(5); // if we just leave this the way it is, the capacity should double to the initial reserve
	
		cout << "The size of the vector: " << intVec.size() << endl; // the size changed in till we reach a certain point
		cout << "The capasity of the vector: " << intVec.capacity() << endl; // the capacity changes at the end of the value point
	}

	//to remove from the vector
	intVec.pop_back(); // remove the last element in the vector

	cout << "The size of the vector: " << intVec.size() << endl; 
	cout << "The capasity of the vector: " << intVec.capacity() << endl; // the output is removes one size but the capacity remains the same

	intVec.clear(); // remove all the elements int the vector

	if (intVec.empty()) {
		cout << "The Vector is empty" << endl;
	}
	else {
		cout << "The vector is not empty" << endl;
	}
	/*
	// just like arrays, we can set individual elements of the vector using this
	intVec[0] = 5;

	cout << "intVec[0]: " << intVec[0] << endl;
	/*
	return 0;
}*/