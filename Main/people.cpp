#include "people.h"
using namespace std;

int Person::count = 0;
Person* Person::begin = NULL;

Person::Person(string name) : name{ name }
{
	if (count == 0)
		begin = this;

	Person* tmp = begin;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = this;
	this->next = NULL;

	count++;
}
Person::~Person() {

}
void Person::SetCount(int number) {
	count = number;
}
int Person::GetCount() {
	return count;
}
void Person::Show() {
	PrintTitle();
	PrintBody();
	cout << endl;
}
void Person::PrintTitle() {
	cout << "���������� � �������." << endl;
}
void Person::PrintBody() {
	cout << "���: " << name << endl;
}
void Person::ShowList() {
	cout << "�������� ������ ������:" << endl;

	Person* tmp = begin;
	while (tmp != NULL) {
		tmp->Show();
		tmp = tmp->next;
	}
}

int Student::count = 0;
Student* Student::begin = NULL;

Student::Student(string name, int year) : Person(name), year{ year }
{
	if (count == 0)
		begin = this;

	Student* tmp = begin;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = this;
	this->next = NULL;

	count++;
};
Student::~Student() {

}
void Student::Show() {
	PrintTitle();
	PrintBody();
	cout << endl;
}
void Student::PrintTitle() {
	cout << "���������� � �������������." << endl;
}
void Student::PrintBody() {
	Person::PrintBody();
	cout << "����: " << year << "-�" << endl;
}
void Student::ShowList() {
	cout << "�������� ������ ��������������:" << endl;

	Student* tmp = begin;
	while (tmp != NULL) {
		tmp->Show();
		tmp = tmp->next;
	}
}

int Teacher::count = 0;
Teacher* Teacher::begin = NULL;

Teacher::Teacher(string name, int experienceYears) : Person(name), experienceYears(experienceYears)
{
	if (count == 0)
		begin = this;

	Teacher* tmp = begin;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = this;
	this->next = NULL;

	count++;
};
Teacher::~Teacher() {

}
string Teacher::GetName() {
	return name;
}
void Teacher::Show() {
	PrintTitle();
	PrintBody();
	cout << endl;
}
void Teacher::PrintTitle() {
	cout << "���������� � �������������." << endl;
}
void Teacher::PrintBody() {
	Person::PrintBody();
	cout << "����: " << experienceYears << " ���" << endl;
}
void Teacher::ShowList() {
	cout << "�������� ������ ��������������:" << endl;

	Teacher* tmp = begin;
	while (tmp != NULL) {
		tmp->Show();
		tmp = tmp->next;
	}
}

int ZavKafedri::count = 0;
ZavKafedri* ZavKafedri::begin = NULL;

ZavKafedri::ZavKafedri(string name, int experienceYears, string kafedra) : Teacher(name, experienceYears), kafedra(kafedra)
{
	if (count == 0)
		begin = this;

	ZavKafedri* tmp = begin;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = this;
	this->next = NULL;

	count++;
};
ZavKafedri::~ZavKafedri() {

}
string ZavKafedri::GetName() {
	return Teacher::GetName();
}
void ZavKafedri::Show() {
	PrintTitle();
	PrintBody();
	cout << endl;
}
void ZavKafedri::PrintTitle() {
	cout << "���������� � ���.�������." << endl;
}
void ZavKafedri::PrintBody() {
	Teacher::PrintBody();
	cout << "�������: " << kafedra << endl;
}
void ZavKafedri::ShowList() {
	cout << "�������� ������ ��������������:" << endl;

	ZavKafedri* tmp = begin;
	while (tmp != NULL) {
		tmp->Show();
		tmp = tmp->next;
	}
}
