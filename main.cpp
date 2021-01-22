//program to find your "magic number"

#include<iostream>
#include <typeinfo>   // operator typeid

using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
	//abort();
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))


int main()
{
// Declare variables called day, month, year, and magicNum that hold whole numbers. Initialize them with data 
// corresponding to January 31, 1970. Do not initialize magicNum

// Using the provided equation , calculate the magic number for the given birthday and store the result in  magicNum
int month;
int year;
int day;
int magicNum;

	test(magicNum == 17);	// Do NOT remove or modify this statement

// Using the variables, print out the given initial birthday and its corresponding magic number.
cout << "The magic number for 1-31-1970 is : " << magicNum;
cout << endl;

// Prompt the user to enter her/his birthdate as 3 whole numbers
cout<<"Please enter your birthdate as 3 whole numbers (MM DD YYYY): ";

// Get the values from the keyboard and store them in the corresponding variables
cin >> month;
cin >> day;
cin >> year;
magicNum = (month*year)%day;

	
// Using the provided equation , calculate the magic number for the entered birthdate and store the result in  magicNum


// Using the variables, print out the entered birthdate and its corresponding magic number.
cout <<"The magic number for " << month << "-"<< day <<"-"<< year <<" is: "<< magicNum; 

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(day) == typeid(int));		// Incorrect data type used for day
	test(typeid(month) == typeid(int));		// Incorrect data type used for month
	test(typeid(year) == typeid(int));		// Incorrect data type used for year
	test(typeid(magicNum) == typeid(int));	// Incorrect data type used for magicNum
	system("pause");

	return 0;
}