//header

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


#ifndef STUDENT_STUCT
#define STUDENT_STUCT
struct Student
{
	int id;
	std::string name;
	std::string hobby;
};
#endif

//Prototypes
int printMenu();

Student * createStudent();
Student * allocateArray(const int studentAmount);
int displayInfo(const Student * studentArr, const int displayOne);



