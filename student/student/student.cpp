//***************************************************************
//*  Robert Hinds
//*  TCES 203
//*  Assignment #3
//*
//*  This Program is a basic student record system. The user can create an array of student structs,
//*  display the information  of all the students or the information of a single student  ID number.
//*  The user can also change the name and hobby of a specified student ID. Two helper functions are
//*  include, a basic help menu, which lists the functions and what it does and returns and simple
//*  memory deallocation function.
//***************************************************************


#include "student.h"

//Deallocates the student struct array that was created and sets the pointer it resided at to NULL.
int deleteArray(Student * studentArray)
{
	delete[]studentArray;
	studentArray = NULL;
	return 0;
}

//Basic help menu, which lists the functions and what it does and returns
void printMenu()
{
	std::cout << "                 *********** HELP MENU ***********" << std::endl << std::endl;
	std::cout << "createStudent() - Create Student Profiles - returns Student struct pointer" << std::endl;
	std::cout << "displayInfo(const Student *, const int)   - Display A Student Profile - returns an int" << std::endl;
	std::cout << "displayInfo(const Student *)              - Display Student Profiles  - returns an int" << std::endl;
}

//Takes in a Student struct array, the size of the array and a student id. It searches
//through the array for the the student ID number. If found, the user is allowed to change
//the name and hobby. Otherwise, says the user was not found.
int changeInfo(Student * studentArr, const int arraySize, int displayOne)
{
	int i = 0;

	while (studentArr[i].id != displayOne && i < arraySize)
	{
		i++;
	}
	if (studentArr[i].id == displayOne)
	{
		std::cout << "Student ID      : " << studentArr[i].id << std::endl;
		std::cout << "Enter student name : ";
		std::getline(std::cin, (studentArr + i)->name);
		std::cout << "Enter student's hobby : ";
		std::getline(std::cin, (studentArr + i)->hobby);
		std::cout << std::endl;
	}
	else std::cout << "Student ID: " << displayOne << " not found." << std::endl;
	return 0;
}

//Takes in a Student struct array, the size of the array and a student id. It searches
//through the array for the the student ID number. If found, the name and hobby of that
//ID number are displayed to the screen. Otherwise, says the user was not found.
int displayInfo(const Student * studentArr ,const int arraySize, const int displayOne)
{
	int i = 0;

	while (studentArr[i].id != displayOne && i < arraySize)
	{
		i++;
	}
	if (studentArr[i].id == displayOne)
	{
		std::cout << "Student ID      : " << studentArr[i].id << std::endl;
		std::cout << "Student's name  : " << studentArr[i].name << std::endl;
		std::cout << "Student's hobby : " << studentArr[i].hobby << std::endl;;
	}
	else std::cout << "Student ID: " << displayOne << " not found." << std::endl;
	return 0;
}

//Takes in a Student struct array and the size of the array. It displays all the information
//for all students structs in the array.
int displayInfo(const Student * studentArr, const int arraySize )
{
	int i = 0;

	while (i < arraySize)
	{
		std::cout << "Student ID      : " << studentArr[i].id << std::endl;
		std::cout << "Student's name  : " << studentArr[i].name << std::endl;
		std::cout << "Student's hobby : " << studentArr[i].hobby << std::endl << std::endl;
		i++;
	}
	return 0;
}

//Dynamically allocates an array of student structs then asks for a student ID, Student name
//and hobby for each struct struct created. If anything other than 5 digits are entered
//the user is prompted to try again due to invalid entry. A Student struct pointer is
//returned to the calling function.
Student * createStudent(const int studentAmount)
{
	int  i;
	std::string placeHolder;
	Student *studentArray = new Student[studentAmount];
	std::cout << std::endl;
	for (i = 0; i < studentAmount; i++)
	{
		placeHolder.clear();

		while (placeHolder.length() != 5)
		{
			std::cout << "Enter a 5 digit id for the student " << i + 1 << ": ";
			std::getline(std::cin, placeHolder);
			if (placeHolder.length() != 5)
			{
				std::cout << "Invalid entry." << std::endl << std::endl;
				placeHolder.clear();
			}
		}
		(studentArray + i)->id = atoi(placeHolder.c_str());
		std::cout << "Enter student name " << i + 1 << ": ";
		std::getline(std::cin, (studentArray + i)->name);
		std::cout << "Enter student's hobby " << i + 1 << ": ";
		std::getline(std::cin, (studentArray + i)->hobby);
		std::cout << std::endl;
	}
	return studentArray;
}
