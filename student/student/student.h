//header
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#ifndef IOSTREAM_H
#define IOSTREAM_H
#include <iostream>
#endif

#ifndef STRING_H
#define STRING_H
#include <string>
#endif

#ifndef IOMAP_H
#define IOMAP_H
#include <iomanip>
#endif


#ifndef STUDENT_STUCT
#define STUDENT_STUCT
struct Student
{
	int id;
	string name;
	string hobby;
};
#endif

#define SIZE 3
//Prototypes
int printMenu();

int createStudent();

Student *allocateArray(int);

