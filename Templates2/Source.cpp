
#include <function.h>

void main()
{
	setlocale(LC_ALL, "Russian");

	int arr1[STROK][STOL];
	double arr2[STROK][STOL];
	char arr3[STROK][STOL];

	const int n = STROK; const int m = STOL;

	cout << "\t Массив типа INT" << "\n";
	Massiv(arr1, STROK, STOL); cout << "\n\n";

	Print(arr1, STROK, STOL); cout << "\n\n";

	cout << "\t Cортируем числа в массиве типа INT " << " "; cout << "\n";
	MassivSort(arr1, STROK, STOL); cout << "\n";
	//PrintSort (arr1, STROK, STOL); cout << "\n";


	cout << "\t Сумма чисел в массиве типа INT " << " ";
	cout << MassivSum(arr1, STROK, STOL); cout << "\n";


	cout << "\t среднее значение в массиве типа INT " << " ";
	cout << MassivAVG(arr1, STROK, STOL); cout << "\n";

	cout << "\t Максимальное значение массива типа INT " << " ";
	cout << MassivMax(arr1, STROK, STOL); cout << "\n";

	cout << "\t Минимальное значение  массива типа INT " << " ";
	cout << MassivMin(arr1, STROK, STOL);  cout << "\n";

	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

	cout << "\t Массив типа DOUBLE" << "\n";
	Massiv(arr2, STROK, STOL); cout << "\n\n";
	Print(arr2, STROK, STOL); cout << "\n\n";

	cout << "\t Cортируем числа в массиве " << " "; cout << "\n";
	//MassivSort(arr2, STROK, STOL); cout << "\n";


	cout << "\t Сумма чисел в массиве " << " ";
	cout << MassivSum(arr2, STROK, STOL); cout << "\n";


	cout << "\t среднее значение в массиве " << " ";
	cout << MassivAVG(arr2, STROK, STOL); cout << "\n";

	cout << "\t Максимальное значение массива  " << " ";
	cout << MassivMax(arr2, STROK, STOL); cout << "\n";

	cout << "\t Минимальное значение  массива  " << " ";
	cout << MassivMin(arr2, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;


	cout << "\t Массив типа CHAR" << "\n";
	Massiv(arr3, STROK, STOL); cout << "\n\n";
	Print(arr3, STROK, STOL); cout << "\n\n";

	cout << "\t Cортируем числа в массиве " << " "; cout << "\n";
	//MassivSort(arr3, STROK, STOL); cout << "\n";


	cout << "\t Сумма чисел в массиве типа" << " ";
	cout << MassivSum(arr3, STROK, STOL); cout << "\n";


	cout << "\t среднее значение в массиве " << " ";
	cout << MassivAVG(arr3, STROK, STOL); cout << "\n";

	cout << "\t Максимальное значение массива  " << " ";
	cout << MassivMax(arr3, STROK, STOL); cout << "\n";

	cout << "\t Минимальное значение  массива  " << " ";
	cout << MassivMin(arr3, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

}

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

