#ifndef _H_EX02_
#define _H_EX02_
using namespace std;

//This .h file hold EX05_01, EX05_02, and EX05_03 in order\

//EX5_01
void EX5_01()
{
	int size;
	cout << "Enter a size for the array.";
	cin >> static_cast<int> (size);

	int* analyze = new int[size];
	int number;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a number for " << i << ". " << endl;
		cin >> number;
		analyze[i] = number; //adds a number to the pointer array
	}
	int sum = 0; //intial sum is zero
	for (int j = 0; j < size; j++) //short arithmetic to find the sum of all of the numbers in the pointer array
	{
		sum += analyze[j];
	}
	int average = sum / size; //takes the sum and finds the average of all the numbers
	cout << "The average is " << average << "." << endl;
	int m = 0; //intial counter at zero
	for (int k = 0; k < size; k++)
	{
		if (analyze[k] > average)
		{
			m++; //counts the numbers above average
		}
	}
	cout << "There are " << m << " numbers above the average." << endl; //outputs the number above average
}

//EX05_2
int* doubleCapacity(const int* list, int size) //enter a pointer array and its size
{
	int *doubleit = new int[2 * size]; //doubles the size
	for (int i = 0; i < size; i++)
	{
		doubleit[i] = list[i]; //puts the original array into the new array

	}
	return doubleit; //returns the new, larger array

}

//EX05_3
int smallest(const int* list, int size) //enter a pointer array and its size
{
	int smallest = 0;
	for (int i = 0; i < size; i++)
	{
		if (list[i] < 0) //searches through the numbers and saves what it sees as the smallest until it goes to the next number
		{
			smallest = list[i]; //if the next number is smaller than the other, the next number will replace it
		}
	}
	return smallest; //returns the smallest of the pointer array
}

#endif
