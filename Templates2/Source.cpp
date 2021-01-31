
#include "Templates.h"
#include "Functions.cpp"

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





