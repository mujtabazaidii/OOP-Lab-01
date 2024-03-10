#include <iostream>
using namespace std;
int main() {
	float x, y;
	cout << "Enter First Number : ";
	cin >> x;
	cout << "Enter Second Number : ";
	cin >> y;
	float* p1 = &x;
	float* p2 = &y;
	cout << "Sum of Numbers is: ";
	cout << *p1 + *p2;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	return 0;
}