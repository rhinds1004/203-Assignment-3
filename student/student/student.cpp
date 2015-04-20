//***************************************************************
//*  Robert Hinds
//*  TCES 203
//*  Assignment #
//*  
//*  This Program does
//***************************************************************


#include "student.h"



int printMenu()
{
	std::cout << "                 *********** HELP MENU ***********" << std::endl << std::endl;
	std::cout << "createStudent() - Create Student Profiles - returns Student struct pointer" << std::endl;
	std::cout << "displayInfo(const Student *, const int)   - Display A Student Profile - returns an int" << std::endl;
	std::cout << "displayInfo(const Student *)              - Display Student Profiles  - returns an int" << std::endl;
	
	return 0;
}
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
		std::cout << "Enter student name " << i + 1 << ": ";
		std::getline(std::cin, (studentArr + i)->name);
		std::cout << "Enter student's hobby " << i + 1 << ": ";
		std::getline(std::cin, (studentArr + i)->hobby);
		std::cout << std::endl;
	}
	else std::cout << "Student ID: " << displayOne << " not found." << std::endl;
	return 0;
}
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
