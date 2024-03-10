#include <iostream>
using namespace std;

int mode(int* arr, int size) {

	int counter;
	int m=0;
	int *mode;
    for (int i = 0; i < size; i++){
            counter=0;
            for (int j = i; j < size; j++) {
				if (*(arr+i) == *(arr+j)){
					counter++;
			    }
			    if(counter > m){
                    m= counter;
                    mode = (arr+i);
			    }
	        }
         }
	if (m == 0 || m==1) {
		cout << "Mode is : ";
		return -1;
	}
	else {
    cout << "Mode is : ";
		return *mode;
}
}

int main() {
	int size, * p;
	cout << "Enter Size: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	cout << mode(arr, size);
	return 0;
}
