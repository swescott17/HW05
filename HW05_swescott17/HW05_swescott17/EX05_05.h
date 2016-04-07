#ifndef _H_EX05_
#define _H_EX05_
#include <string>
using namespace std;

class Course
{
public:
	Course(const string& courseName, int capacity);
	~Course();
	Course(const Course& C);
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	string* doubleCapacity(const string* list, int size);
	void clear();

private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};
#endif
