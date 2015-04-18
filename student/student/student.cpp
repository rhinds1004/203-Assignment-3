//***************************************************************
//*  Robert Hinds
//*  TCES 203
//*  Assignment #
//*  
//*  This Program does
//***************************************************************


#include "student.h"

//using namespace std;


int main()
{
	int select = 0;
	
printMenu();
createStudent();
		cin.get();
		return 0;
}

int printMenu()
{
	cout << "*********** MENU ***********" << endl << endl;
	cout << "1) Create Student Profiles" << endl;
	cout << "2) Display A Student Profile" << endl;
	cout << "3) Display Student Profiles" << endl;
	cout << "4) Exit" << endl;
	cout << endl << "****************************" << endl << endl;
	return 0;
}

int createStudent()
{
	int count = 0, i;
	Student *studentArray;
	string placeHolder;
	cout << "How many student profiles to create:";
	cin >> count;
	cout.flush();
	studentArray = allocateArray(count);
	for (i = 0; i < count; i++)
	{
		cout << "Enter id for student " << i+1 << ": ";
		getline(cin, placeHolder);
		(studentArray + i)->id = atoi(placeHolder.c_str());
		
		cout << "Enter student name: " << i+1 << ": ";
		getline(cin, (studentArray + i)->name);
		cout << "Enter student's hobby: " << i+1 << ": ";
		getline(cin, (studentArray + i)->name);
	}
	return 0;
}
Student * allocateArray(int studentAmount)
{
	Student *students = new Student[studentAmount];
	return students;
}