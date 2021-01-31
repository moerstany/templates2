//#include "Templates.h"
#include "Functions.cpp"

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