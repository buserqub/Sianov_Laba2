#include <iostream>
#include "people.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	Person::SetCount(5);

	cout << "���������� ������ ����� ���������� count �� 5: " << Person::GetCount() << endl << endl;

	Person::SetCount(0);

	Person person1("���1");	
	Person person2("���2");
	
	cout << "���������� ������: " << Person::GetCount() << endl << endl;

	Student person3 = Student("���3", 2);
	Teacher person4 = Teacher("���4", 10);
	cout << "���������� ������: " << Person::GetCount() << endl << endl;

	ZavKafedri person5 = ZavKafedri("���5", 15, "���.���.");

	person2.Show();
	person3.Show();
	person4.Show();
	person5.Show();

	Person::ShowList();
	Student::ShowList();
	Teacher::ShowList();
	ZavKafedri::ShowList();
	
}