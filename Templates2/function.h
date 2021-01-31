#pragma once
#include <iostream>
using namespace std;

// если мы ставим количество строк равное 1, то получаем одномерный массив

// nikak ne poluchaetcya sortirovky cdelat s voskresenya s kodom cidela?  pro dvumernue massivi: net sortirovki/ 


const int STROK = 5;
const int STOL = 5;


void Massiv(int arr1[STROK][STOL], const int n, const int m);
void MassivSort(int arr1[STROK][STOL], const int n, const int m);
template <typename T>
T MassivSum(T arr1[STROK][STOL], const int n, const int m);
template <typename T>
T MassivAVG(T arr1[STROK][STOL], const int n, const int m);
template <typename T>
T MassivMax(T arr1[STROK][STOL], const int n, const int m);
template <typename T>
T MassivMin(T arr1[STROK][STOL], const int n, const int m);

template <typename T>
void Print(T arr[STROK][STOL], const int n, const int m);
template <typename T>
void Print(T arr[STROK][STOL], const int n, const int m);
template <typename T>
void Print(T arr[STROK][STOL], const int n, const int m);
//void PrintSort(int arr1[STROK][STOL], const int n, const int m);


void Massiv(double arr2[STROK][STOL], const int n, const int m);
//void MassivSort(double arr2[STROK][STOL], const int n, const int m);
/*double MassivSum(double arr2[STROK][STOL], const int n, const int m);
double MassivAVG(double arr2[STROK][STOL], const int n, const int m);
double MassivMax(double arr2[STROK][STOL], const int n, const int m);
double MassivMin(double arr2[STROK][STOL], const int n, const int m);

void PrintMassiv(double arr2[STROK][STOL], const int n, const int m);
//void PrintSort(double arr2[STROK][STOL], const int n, const int m);*/


void Massiv(char arr3[STROK][STOL], const int n, const int m);
//void MassivSort(char arr3[STROK][STOL], const int n, const int m);
/*char MassivSum(char arr3[STROK][STOL], const int n, const int m);
double MassivAVG(char arr3[STROK][STOL], const int n, const int m);
char MassivMax(char arr3[STROK][STOL], const int n, const int m);
char MassivMin(char arr3[STROK][STOL], const int n, const int m);

void PrintMassiv(char arr3[STROK][STOL], const int n, const int m);
//void PrintSort(char arr3[STROK][STOL], const int n, const int m);

*/

