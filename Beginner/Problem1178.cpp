//
// Created by lucas on 01/17/2021.
//

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	const int size = 100;
	double arr[size];

	cin >> arr[0];

	for (int i = 1; i < size; i++) {
		arr[i] = arr[i - 1] / 2;
	}

	for (int i = 0; i < size; i++) {
		cout << fixed << setprecision(4) << "N[" << i << "] = " << arr[i] << endl;
	}  
	
	return 0;
}
