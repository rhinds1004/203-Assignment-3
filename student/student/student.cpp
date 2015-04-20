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
	int count = 0;
	string placeHolder;
	cout << "How many student profiles to create:";
	getline(cin, placeHolder);
	count = atoi(placeHolder.c_str());
Student * stud = createStudent(count);
displayInfo(stud, count);
changeInfo(stud,3, 11111);
		cin.get();
		delete []stud;
		return 0;
}

int printMenu()
{
	cout << "                 *********** HELP MENU ***********" << endl << endl;
	cout << "createStudent() - Create Student Profiles - returns Student struct pointer" << endl;
	cout << "displayInfo(const Student *, const int)   - Display A Student Profile - returns an int" << endl;
	cout << "displayInfo(const Student *)              - Display Student Profiles  - returns an int" << endl;
	
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
		cout << "Student ID      : " << studentArr[i].id << endl;
		cout << "Enter student name " << i + 1 << ": ";
		getline(cin, (studentArr + i)->name);
		cout << "Enter student's hobby " << i + 1 << ": ";
		getline(cin, (studentArr + i)->hobby);
		cout << endl;
	}
	else cout << "Student ID: " << displayOne << " not found." << endl;
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
		cout << "Student ID      : " << studentArr[i].id << endl;
		cout << "Student's name  : " << studentArr[i].name << endl;
		cout << "Student's hobby : " << studentArr[i].hobby << endl;;
	}
	else cout << "Student ID: " << displayOne << " not found." << endl;
	return 0;
}

int displayInfo(const Student * studentArr, const int arraySize )
{
	int i = 0;

	while (i < arraySize)
	{
		cout << "Student ID      : " << studentArr[i].id << endl;
		cout << "Student's name  : " << studentArr[i].name << endl;
		cout << "Student's hobby : " << studentArr[i].hobby << endl << endl;
		i++;
	}
	return 0;
}

Student * createStudent(const int studentAmount)
{
	int  i;
	//Student *studentArray;
	string placeHolder;
	
	Student *studentArray = new Student[studentAmount];
	cout << endl;
	for (i = 0; i < studentAmount; i++)
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
		cout << endl;
	}
	return studentArray;
}
