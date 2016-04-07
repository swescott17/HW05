#include <iostream>
#include "EX05.h"
#include "EX05_04.h"
#include "EX05_05.h"
using namespace std;

void printArray(const int* list, int size) //prints the array for Ex05_02
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " " << endl;
	}
}

int main()
{

	int list[6] = { 1, 2, 3, 4, 5, 6 }; //Array for Ex05_02
	int list2[9] = { 1,2,3,4,5,10,100, 2,-22 }; //EX05_03 test list (array)

	EX5_01(); //Ex05_01

	int* p = doubleCapacity(list, 6); //EX05_02 function
	printArray(p, 12); //shows six empty spaces at the end


	int f = smallest(list2, 9); //EX05_3 function
	cout << f << endl; //shows the smallest of the array which is -22

	Rectangle2D r1(2.00, 2.00, 5.5, 4.9); //EX05_04 class test
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);


	cout << "r1's perimeter is " << r1.getPerimeter() << ". It's area is " << r1.getArea() << "." << endl; //shows the area and perimeter of rectangle r1
	cout << "Does r1 contain (3,3)? " << r1.contains(3, 3) << ". (if 1, it is true)" << endl; //shows true
	cout << "Does r1 contain r2? " << r1.contains(r2) << "." << endl; //shows false
	cout << "Does r3 overlap r1? " << r1.overlaps(r3) << "." << endl; //shows true



	Course c1("Graph Theory", 5); //EX05_05 class test
	c1.addStudent("Danny"); //adds students to the c1 course called "Graph Theory"
	c1.addStudent("Benny");
	c1.addStudent("Winston");

	c1.dropStudent("Benny"); //Drops the Second Student, Benny
	cout << "The students in the course are " << c1.getStudents()[0] << " and " << c1.getStudents()[2] << "." << endl; //Shows that there are two students in the course named Winston and Danny

	return 0;
}