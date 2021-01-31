#include <function.h>

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


template <typename T>
T MassivSum(T arr[STROK][STOL], const int n, const int m)
{

	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			summ += arr[i][j];
		}
	}
	return summ;

}

template <typename T>
T MassivAVG(T arr[STROK][STOL], const int n, const int m)
{

	return MassivSum(arr, n, m) / m / n;
}

template <typename T>
T MassivMax(T arr[STROK][STOL], const int n, const int m)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}


	}
	return max;
}
template <typename T>
T MassivMin(T arr[STROK][STOL], const int n, const int m)
{
	int min1 = arr[0][0];
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < m; j++)
		{
			if (arr[i][j] < min1) min1 = arr[i][j];
		}

	}
	return min1;
}


template <typename T>
void Print(T arr[STROK][STOL], const int n, const int m)
{

	for (int i = 0; i < n; i++)

	{
		for (int j = 0; j < m; j++)
		{

			cout << arr[i][j] << " \t";

		}
		cout << endl;
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

