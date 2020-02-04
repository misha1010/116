#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <iostream>
#include <random>

using namespace std;


int main()
{
	const int n = 10;
	int arr[n][n];
	int var;
	srand(time(0));


	for (int i(0); i < n; i++)
	{
		for (int j(0); j < n; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl << endl;
	
	
	
	for (int i(0); i < n; i++)
	{
		for (int j(0); j < n; j++)
		{
			cout << arr[n-i-1][j] << ' ';
		}
		cout << endl;
	}
	
	system("pause");	
	return 0;
}

//Hello! Have a nice day!
