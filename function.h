#pragma once

#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;
#define cls system("cls");
#define pause system("pause");
// 1
void rand(int* mass, int size)
{
	int start = 0;
	int end = 0;
	cout << "Enter diapazon start: ";
	cin >> start;
	
	cout << "Enter diapazon end: ";
	cin >> end;
	end = end + 1;
	


	for (int i = 0; i < size; i++)
	{
		mass[i] = start + rand() % (end - start);
	}


	pause
		cls
}

// 2
void show(int* mass, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;
	pause
		cls
}

//3
void search(int* mass, int size)
{
	int gg = 0;
	cout << "Enter number for search: ";
	cin >> gg;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] == gg)
		{
			cout << "[" << mass[i] << "] ";
			cout << "- Index: " << i << endl;
		}
	}
	cout << endl;
	pause
		cls
}
//4
void sort(int* mass, int size)
{
	int t = 0;
	cout << "1. Zrostanie" << endl;
	cout << "2. Spadanie" << endl;
	cin >> t;


	/////////
	int ff = 0;
	cout << "\t Sort" << endl;
	cout << "1. Bublle\n2. Select\n3. Insert\n";
	cin >> ff;
	switch (ff)
	{
	case 1:
	{
		if (t == 1)
		{
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = 0; j < size - 1; j++) {
					if (mass[j] > mass[j + 1]) {
						int temp = mass[j];
						mass[j] = mass[j + 1];
						mass[j + 1] = temp;
						temp = 0;
					}
				}
			}
		}
		else if (t == 2)
		{
			for (int i = 0; i < size - 1; i++) {
				for (int j = 0; j < size - 1; j++) {
					if (mass[j] < mass[j + 1]) {
						int temp = mass[j];
						mass[j] = mass[j + 1];
						mass[j + 1] = temp;
						temp = 0;
					}
				}
			}

		}
	}
	break;
	case 2:
	{
		if (t == 1)
		{
			for (int i = 0; i < size; i++)
			{
				int temp = mass[0];
				for (int j = i + 1; j < size; j++)
				{
					if (mass[i] > mass[j]) {
						temp = mass[i];
						mass[i] = mass[j];
						mass[j] = temp; temp = 0;
					}
				}
			}
		}
		else if (t == 2)
		{
			//////
		}

	}
	break;
	case 3:
	{
		if (t == 1)
		{
			int temp = 0;
			int index = 0;
			for (int i = 1; i < size; i++) {
				temp = mass[i];
				index = i - 1;
				while (index >= 0 && mass[index] > temp) {
					mass[index + 1] = mass[index];
					mass[index] = temp;
					index--;
				}
			}
		}
		else if (t == 2)
		{
			////
		}

	}
	break;
	default:
	{
		cout << "errorrrrrr" << endl;
	}
	}
	pause
		cls
}
//5
void aver(int* mass, int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{

		sum = sum + mass[i];

	}
	cout << sum / size << endl;
	pause
		cls
}

// 6
void kratne(int* mass, int size)
{
	int co = 0;
	for (int i = 0; i < size; i++)
	{

		if (mass[i] % 5 == 0)
		{
			co = co + 1;
		}

	}
	cout << co << endl;
	pause
		cls
}


