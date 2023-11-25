#include <iostream>
#include "people.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	Person::SetCount(5);

	cout << "Количество персон после увеличения count до 5: " << Person::GetCount() << endl << endl;

	Person::SetCount(0);

	Person person1("Имя1");	
	Person person2("Имя2");
	
	cout << "Количество персон: " << Person::GetCount() << endl << endl;

	Student person3 = Student("Имя3", 2);
	Teacher person4 = Teacher("Имя4", 10);
	cout << "Количество персон: " << Person::GetCount() << endl << endl;

	ZavKafedri person5 = ZavKafedri("Имя5", 15, "Мех.Мат.");

	person2.Show();
	person3.Show();
	person4.Show();
	person5.Show();

	Person::ShowList();
	Student::ShowList();
	Teacher::ShowList();
	ZavKafedri::ShowList();
	
}