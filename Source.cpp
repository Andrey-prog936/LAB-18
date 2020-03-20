#include<iostream>
#include "function.h"
using namespace std;



void showArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	const int size = 100;
	int mass[size];
	int action = 0;
	do
	{
		cout << "\tMENU:" << endl;
		cout << "1. Rand mass" << endl;
		cout << "2. Show mass" << endl;
		cout << "3. Search object" << endl;
		cout << "4. Sort mass" << endl;
		cout << "5. Average" << endl;
		cout << "6. Kratni 5" << endl;
		cout << "7. ---" << endl;
		cout << "8. Exit" << endl << endl;
		cout << "Select action ->_";
		cin >> action;

		switch (action)
		{
		case 1: {
			rand(mass, size);

		}break;

		case 2: {
			show(mass, size);

		}break;
		case 3: {
			search(mass, size);

		}break;
		case 4: {
			sort(mass, size);

		}break;
		case 5: {
			aver(mass, size);

		}break;
		case 6: {
			kratne(mass, size);

		}break;
		case 7: {
			//////

		}break;
		case 8: {
			return 0;

		}break;

		default: {
			cout << "Please select action (1 - 8)" << endl;
		}
		}

	} while (action != 8);

	system("pause");
	return 0;
}