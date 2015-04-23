//***************************************************************
//*  Robert Hinds
//*  TCES 203
//*  Assignment #3
//*		
//*  This is a header file for a basic student record system. The user can create an array of student structs,
//*  display the information  of all the students or the information of a single student  ID number.
//*  The user can also change the name and hobby of a specified student ID. Two helper functions are
//*  include, a basic help menu, which lists the functions and what it does and returns and simple
//*  memory deallocation function.
//***************************************************************

#ifndef IOSTREAM_H
#define IOSTREAM_H
#include <iostream>
#endif

#ifndef STRING_H
#define STRING_H
#include <string>
#endif

#ifndef CSTLIB_H
#define CSTLIB_H
#include <cstdlib>
#endif


#ifndef STUDENT_H
#define STUDETN_H
struct Student
{
	int id;
	std::string name;
	std::string hobby;
	char end;
};

//Prototypes
void printMenu();
Student * createStudent(const int arraySize);
int displayInfo(const Student *, const int arraySize, const int idNumber);
int displayInfo(const Student *, const int arraySize);
int changeInfo(Student *, const int arraySize, const int idNumber);
int deleteArray(Student *);
#endif


