#include <iostream>
#include <string>
#include "EX05_05.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

Course::Course(const Course& C)
{
	courseName = C.courseName;
	numberOfStudents = C.numberOfStudents;
	capacity = C.capacity;
	students = new string[capacity];

}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	int k;
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (name == students[i])
		{
			students[i].clear();
			k = i;
			numberOfStudents--;
		}
	}
	//for (int m = numberOfStudents; i > k; )
}

string* Course::getStudents() const
{

	return students;

}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

string* Course::doubleCapacity(const string* list, int size)
{
	string *doubleit = new string[2 * size];
	for (int i = 0; i < size; i++)
	{
		doubleit[i] = list[i];

	}
	return doubleit;

}
void Course::clear()
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i].clear();
	}
}