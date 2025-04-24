#include"Struktura.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	University DGTU = CreatUniversity();
	University DGTU_Sorted = CreatUniversitySorted(DGTU);
	CoutUniversity(DGTU);
	cout << "__________________________________" << endl << endl;
	CoutUniversity(DGTU_Sorted);
}


