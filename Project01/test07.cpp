#include <iostream>

using namespace std;

int* test07() {

	int* pointer = new int;

	*pointer = 100;

	return pointer;
}

int main() {

	int* result = test07();

	cout << "Adress: " << result << endl;
	cout << "Value: " << *result << endl;

	delete result;

	return 0;
}