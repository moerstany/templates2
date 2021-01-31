
#include "Templates.h"
//#include "Source.cpp"
//#include "FuncMassive.cpp"
//#include "massiv.cpp"

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
