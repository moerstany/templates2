#include "Templates.h"


void Massiv(int arr1[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr1[i][j] = rand() % 100;

		}

	}

}

void MassivSort(int arr1[STROK][STOL], const int n, const int m)
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		int j = 0, dj = -1, * pre = &arr1[0][0];

		for (int i = 0; i < n; i++)
		{
			for (dj = -dj, j += dj; j >= 0 && j < m; j += dj)
			{
				if (arr1[i][j] > * pre)
				{
					swap(arr1[i][j], *pre);
					sorted = false;
				}
				else pre = &arr1[i][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr1[i][j] << "\t";
		}   cout << endl;
	}


}


void Massiv(double arr2[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr2[i][j] = rand() % 100;
			arr2[i][j] /= 10;
		}

	}

}



void Massiv(char arr3[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = rand() % 177;

		}

	}

}

