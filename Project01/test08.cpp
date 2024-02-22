#include <iostream>

using namespace std;

int* test08() {
					  // \O/ //
	int number = 100; //  |  //
					  // / \ //
	return &number;	  // так нельзя
}

int main() {

	int* result = test08();

	cout << "Adress: " << result << endl;
	cout << "Value: " << *result << endl;

	delete result;

	return 0;
}