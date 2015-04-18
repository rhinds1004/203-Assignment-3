//***************************************************************
//*  Robert Hinds
//*  TCES 203
//*  Assignment #
//*  
//*  This Program does
//***************************************************************


#include "student.h"

using namespace std;


int main()
{
	int select = 0;
	
printMenu();

Student * stud = createStudent();
displayInfo(stud, 11111);
		cin.get();
		delete []stud;
		return 0;
}

int printMenu()
{
	cout << "*********** HELP MENU ***********" << endl << endl;
	cout << "1) Create Student Profiles" << endl;
	cout << "2) Display A Student Profile" << endl;
	cout << "3) Display Student Profiles" << endl;
	cout << "4) Exit" << endl;
	cout << endl << "****************************" << endl << endl;
	return 0;
}

int displayInfo(const Student * studentArr, const int displayOne)
{
	int i = 0, studentCount = 0;
	
	while (studentArr[i].id != displayOne && studentArr[i].id != NULL)
	{
		i++;
	}
	if (studentArr[i].id == displayOne)
	{
		cout << "Student's name  : " << studentArr[i].name << endl;
		cout << "Student's hobby : " << studentArr[i].hobby << endl;;
	}
	else cout << "Student ID: " << displayOne << " not found." << endl;
	return 0;
}
Student * createStudent()
{
	int count = 0, i;
	Student *studentArray;
	string placeHolder;
	cout << "How many student profiles to create:";
	getline(cin, placeHolder);
	count = atoi(placeHolder.c_str());
	studentArray = allocateArray(count);
	for (i = 0; i < count; i++)
	{
		placeHolder.clear();
		while (placeHolder.length() != 5)
		{
			cout << "Enter a 5 digit id for the student " << i + 1 << ": ";
			getline(cin, placeHolder);
			if (placeHolder.length() != 5)
			{
				cout << "Invalid entry." << endl << endl;
				placeHolder.clear();
			}
		}
		(studentArray + i)->id = atoi(placeHolder.c_str());
		cout << "Enter student name " << i + 1 << ": ";
		getline(cin, (studentArray + i)->name);
		cout << "Enter student's hobby " << i + 1 << ": ";
		getline(cin, (studentArray + i)->hobby);
	}
	return studentArray;
}

Student * allocateArray(const int studentAmount)
{
	Student *students = new Student[studentAmount];
	return students;
}