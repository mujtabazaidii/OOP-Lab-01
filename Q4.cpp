#include <iostream>
using namespace std;
int* arr(int size) {
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}

	return arr;
}
int main() {
	int size,*p;
	cout << "Enter Size : ";
	cin >> size;
	p = arr(size);
	cout << "Address : "<< p << endl;
	cout << "Array : ";
	cout << "{";
	for (int i = 0; i < size; i++) {
		cout << " ";
		cout << *(p + i);
	}
	cout << " }";
	cout << endl << endl << endl;
	delete[]p;
	return 0;
}
