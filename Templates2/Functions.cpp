
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

	cout << "\t ������ ���� INT" << "\n";
	Massiv(arr1, STROK, STOL); cout << "\n\n";

	Print(arr1, STROK, STOL); cout << "\n\n";
	

	cout << "\t ����� ����� � ������� ���� INT " << " ";
	cout << MassivSum(arr1, STROK, STOL); cout << "\n";


	cout << "\t ������� �������� � ������� ���� INT " << " ";
	cout << MassivAVG(arr1, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� ������� ���� INT " << " ";
	cout << MassivMax(arr1, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  ������� ���� INT " << " ";
	cout << MassivMin(arr1, STROK, STOL);  cout << "\n";

	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    
	
	cout << "\t ������ ���� DOUBLE" << "\n";
	Massiv(arr2, STROK, STOL); cout << "\n\n";
	Print(arr2, STROK, STOL); cout << "\n\n";


	cout << "\t C�������� ����� � ������� " << " "; cout << "\n";
	//MassivSort(arr2, STROK, STOL); cout << "\n";


	cout << "\t ����� ����� � ������� " << " ";
	cout << MassivSum(arr2, STROK, STOL); cout << "\n";


	cout << "\t ������� �������� � ������� " << " ";
	cout << MassivAVG(arr2, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� �������  " << " ";
	cout << MassivMax(arr2, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  �������  " << " ";
	cout << MassivMin(arr2, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;


	cout << "\t ������ ���� CHAR" << "\n";
	Massiv(arr3, STROK, STOL); cout << "\n\n";
	Print(arr3, STROK, STOL); cout << "\n\n";

	cout << "\t C�������� ����� � ������� " << " "; cout << "\n";
	//MassivSort(arr3, STROK, STOL); cout << "\n";


	cout << "\t ����� ����� � ������� ����" << " ";
	cout << MassivSum(arr3, STROK, STOL); cout << "\n";


	cout << "\t ������� �������� � ������� " << " ";
	cout << MassivAVG(arr3, STROK, STOL); cout << "\n";

	cout << "\t ������������ �������� �������  " << " ";
	cout << MassivMax(arr3, STROK, STOL); cout << "\n";

	cout << "\t ����������� ��������  �������  " << " ";
	cout << MassivMin(arr3, STROK, STOL);  cout << "\n";
	cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

}
