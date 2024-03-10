#include <iostream>
using namespace std;
void Ascending(int* arr2, int size) {
	int t;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(arr2 + i) > *(arr2 + j)) {
				t = *(arr2 + i);
				*(arr2 + i) = *(arr2 + j);
				*(arr2 + j) = t;
			}
		}
	}
	cout << "Ascending Order: ";
	for (int i = 0; i < size; i++) {
		cout << " ";
		cout << *(arr2 + i);
	}
}
double Average(int* arr1, int size) {
	double avg;
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr1 + i);
	}
	avg = sum / size;
	cout << endl;
	cout << "Average is: ";
	return avg;
}
int main() {
	int size;
	cout << "Enter Size : ";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter Test Scores : ";
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	cout << endl << endl;
	cout << Average(arr, size);
	cout << endl << endl;
	Ascending(arr, size);
	cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
	return 0;
}