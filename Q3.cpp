#include <iostream>
using namespace std;
int main() {
	int* p = new int;
	cout << "Enter Number : ";
	cin >> *p;
	cout << "Square of Number : " << (*p) * (*p) << endl;
	cout << "Cube of Number   : " << (*p) * (*p) * (*p) << endl;
	cout << "Half of Number   : " << (*p) / 2 << endl;
	delete p;
	return 0;
}
