#include <iostream>
#include <string>
#include <vector>
#include <C:/Users/Сева/source/repos/StructuraFunction/StructuraFunction/StructuraFunction.cpp>
#include "C:\Users\Сева\source\repos\Struktura\Struktura\Struktura.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	University a = CreatUniversity();
	University b = CreatUniversitySorted(a);
	CoutUniversity(a);
	cout << "__________________________________" << endl << "-----------------------------" << endl;
	CoutUniversity(b);
}


