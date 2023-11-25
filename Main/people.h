#pragma once
#include <iostream>
using namespace std;


class Person
{
public:
	Person(string name);
	~Person();
	static void SetCount(int number);
	static int GetCount();
	void Show();
	void PrintTitle();
	void PrintBody();
	void Add();
	static void ShowList();
	static Person* begin;
	Person* next;
protected:
	string name;
	static int count;
};

//struct List {
//public:
//	List(List* next, List* begin, Person person) : next{ next }, begin{ begin }, person{ person }
//	{};
//	List(List* next, Person person) : next{ next }, begin{ this }, person{ person }
//	{};
//	List() : next{ NULL }, begin{ NULL }, person{ NULL }
//	{};
//
//	void Add(Person person) {
//		List* tmp = begin;
//		while (tmp->next != NULL) {
//			List* tmp = tmp->next;
//		}
//		List tmp2 = List(NULL, begin, person);
//		tmp->next = &tmp2;
//	};
//protected:
//	List* next;
//	List* begin;
//	Person person;
//};

class Student : Person
{
public:
	Student(string name, int year);
	~Student();
	void Show();
	void PrintTitle();
	void PrintBody();
	static void ShowList();
	static Student* begin;
	Student* next;
protected:
	int year;
	static int count;
};
class Teacher : Person
{
public:
	Teacher(string name, int experienceYears);
	~Teacher();
	string GetName();
	void Show();
	void PrintTitle();
	void PrintBody();
	static void ShowList();
	static Teacher* begin;
	Teacher* next;
protected:
	int experienceYears;
	static int count;
};
class ZavKafedri : Teacher
{
public:
	ZavKafedri(string name, int experienceYears, string kafedra);
	~ZavKafedri();
	string GetName();
	void Show();
	void PrintTitle();
	void PrintBody();
	static void ShowList();
	static ZavKafedri* begin;
	ZavKafedri* next;
protected:
	string kafedra;
	static int count;
};

