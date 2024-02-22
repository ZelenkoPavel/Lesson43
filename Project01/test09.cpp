#include <iostream>

using namespace std;

// \O/ //
//  |  //
// / \ //

int* test08() {

	static int number = 100;

	return &number;
}

int main() {

	int size = 5;

	//do {
	//	system("cls");
	//	cout << "Input size of array: ";
	//	cin >> size;
	//} while (size <= 0);

	int* pointer = new int[size];

	cout << pointer << endl;
	cout << pointer + 1 << endl;
	cout << pointer + 2 << endl;
	cout << pointer + 3 << endl;
	cout << pointer + 4 << endl;

	return 0;
}