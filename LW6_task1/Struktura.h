#include <iostream>
#include <string>
#include <vector>

using namespace std;

int CheckNumber(int f);
struct Exam
{
	vector <int> estimation;
	int AvaregeScore;
};
struct Student
{
	string Name;
	string Surname;
	string Patronymic;
	Exam Exams;
};
typedef vector<Student> vStudent;
struct University
{
	vStudent list_student;
	int AvarageUniversity;
};

int CheckScore();
void CoutExam(Exam a);
Exam CreatExam();
void CoutStudent(Student a);
Student CreatStudent();
University CreatUniversity();
void CoutUniversity(University a);
University CreatUniversitySorted(University a);

