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

	int* result = test08();

	cout << "Adress: " << result << endl;
	cout << "Value: " << *result << endl;

	//delete result;

	return 0;
}