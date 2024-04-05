#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true) {
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}

	cout << "\n------------------" << endl;
	cout << " Enter array element \n" << endl;
	cout << "------------------\n" << endl;
	for (i = 0; i < n; i++) {

	}
}