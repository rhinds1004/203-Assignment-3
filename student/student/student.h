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
	char end;
};
#endif

//Prototypes
int printMenu();

Student * createStudent();
Student * allocateArray(const int);
int displayInfo(const Student * , const int);
int displayInfo(const Student *);
int changeInfo(Student * , const int);



