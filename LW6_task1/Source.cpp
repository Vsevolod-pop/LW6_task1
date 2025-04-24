#include"Struktura.h"

int CheckNumber(int f)
{
	int flag = 0;
	string stroka;
	int K;
	if (f == 0)
	{
		cout << "������� ����� ��������� - ";
	}
	else
	{
		cout << "������� ����� ��������� - ";
		flag = 1;
	}
	cin >> stroka;
	while (true)
	{
		try
		{
			K = stoi(stroka);
			if (flag == 1)
			{
				if ((to_string(K) == stroka) and (K <= 100) and (K > 0))
				{
					return K;
				}
				else
				{
					throw logic_error("����� ������� �����������");
				}
			}
			else
			{
				if ((to_string(K) == stroka) and (K <= 100) and (K >= 0))
				{
					return K;
				}
				else
				{
					throw logic_error("����� ������� �����������");
				}
			}
			
		}
		catch (...)
		{
			cout << "����� ������� �����������. ������� ����� - ";
			cin >> stroka;
		}
	}
}
int CheckScore()
{
	string stroka;
	int K;
	cout << "������� ����������� ������ - ";
	cin >> stroka;
	while (true)
	{
		try
		{
			K = stoi(stroka);
			if ((to_string(K) == stroka) and (K <= 100) and (K >= 0))
			{
				return K;
			}
			else
			{
				throw logic_error("����������� ������ ������� �����������");
			}
		}
		catch (...)
		{
			cout << "����������� ������ ������� �����������. ������� ����������� ������ - ";
			cin >> stroka;
		}
	}
}
void CoutExam(Exam a)
{
	for (int i = 0; i < a.estimation.size(); i++)
	{
		cout << i + 1 << " ������� - " << a.estimation[i] << " ������" << endl;
	}
	cout << "������� ���� �������� - " << a.AvaregeScore;
}
Exam CreatExam()
{
	Exam a;
	int n = CheckNumber(0);
	for (int i = 0; i < n; i++)
	{
		int c = CheckScore();
		a.estimation.push_back(c);
	}
	int summ = 0;
	for (int i = 0; i < a.estimation.size(); i++)
	{
		summ += a.estimation[i];
	}
	a.AvaregeScore = summ / n;
	return a;
}
void CoutStudent(Student a)
{
	cout << "��� ��������:" << a.Name << endl;
	cout << "������� ��������:" << a.Surname << endl;
	cout << "�������� ��������:" << a.Patronymic << endl << endl;
	cout << "����������� ������ �� ������� �������� � ������� ���� ��������:" << endl;
	CoutExam(a.Exams);
	cout << endl << "------------------------" << endl;
}
Student CreatStudent()
{
	Student a;
	cout << "������� ��� �������� - ";
	cin >> a.Name;
	cout << "������� ������� �������� - ";
	cin >> a.Surname;
	cout << "������� �������� �������� - ";
	cin >> a.Patronymic;
	cout << endl;
	a.Exams = CreatExam();
	return a;
}
University CreatUniversity()
{
	University a;
	int n = CheckNumber(1);
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		a.list_student.push_back(CreatStudent());
		cout << endl;
	}
	int summ = 0;
	for (int i = 0; i < a.list_student.size(); i++)
	{
		summ += a.list_student[i].Exams.AvaregeScore;
	}
	a.AvarageUniversity = summ / n;
	return a;
}
void CoutUniversity(University a)
{
	for (int i = 0; i < a.list_student.size(); i++)
	{
		CoutStudent(a.list_student[i]);
	}
}
University CreatUniversitySorted(University a)
{
	University b;
	int n = a.list_student.size();
	for (int i = 0; i < n; i++)
	{
		if (a.list_student[i].Exams.AvaregeScore == 100)
		{
			b.list_student.push_back(a.list_student[i]);
		}
		else if ((a.list_student[i].Exams.AvaregeScore < 100) and (a.list_student[i].Exams.AvaregeScore >= a.AvarageUniversity))
		{
			b.list_student.push_back(a.list_student[i]);
		}
	}
	return b;
}