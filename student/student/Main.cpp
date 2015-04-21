#include <iostream>
#include <string>
#include "student.h"
using namespace std;


int main()
{
	int count = 0;
	string placeHolder;
	int answer = 0;
	//Prints a help menu with what the function does and what it returns.
	printMenu();
	cout << endl << endl;
	//Showing createStudent() function
	std::cout << endl << "How many student profiles to create: ";
	getline(cin, placeHolder);
	count = atoi(placeHolder.c_str());
	Student * stud = createStudent(count);
	placeHolder.clear();
	//Show displayInfo() function for multiple ID numbers
	cout << endl << "*Displaying student information just entered*" << endl;
	displayInfo(stud, count);
	//Showing displayInfo() function for a single ID number
	cout << "Which student information to display: 1337 " << endl;
	cout << "*Showing error checking if invalid student id is entered*" << endl;
	placeHolder = "1337";
	answer = atoi(placeHolder.c_str());
	displayInfo(stud, count, answer);
	cout << endl;
	placeHolder.clear();
	cout << "Which student information to display: ";
	getline(cin, placeHolder);
	answer = atoi(placeHolder.c_str());
	displayInfo(stud, count, answer);
	cout << endl;
	cout << endl << "*Displaying student information*" << endl;
	displayInfo(stud, count);
	placeHolder.clear();
	//Showing changeInfo() function
	cout << "Which student information to change: 1337 " << endl;
	cout << "*Showing error checking if invalid student id is entered*" << endl;
	placeHolder = "1337";
	answer = atoi(placeHolder.c_str());
	displayInfo(stud, count, answer);
	cout << endl;
	placeHolder.clear();
	cout << endl << "Which student information to change: ";
	getline(cin, placeHolder);
	answer = atoi(placeHolder.c_str());
	changeInfo(stud, count, answer);
	cout << endl << "*Displaying changed student*" << endl;
	displayInfo(stud, count, answer);
	std::cin.get();
	//Deleting dynamically allocated array function
	deleteArray(stud);
	return 0;
}
