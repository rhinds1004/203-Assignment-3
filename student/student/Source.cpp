#include <iostream>
#include <string>
#include "student.h"
using namespace std;


int main()
{
	int count = 0;
		string placeHolder;
		int answer = 0;
			std::cout << "How many student profiles to create: ";
		getline(cin, placeHolder);
			count = atoi(placeHolder.c_str());
			Student * stud = createStudent(count);
			placeHolder.clear();
			cout << endl << "*Displaying student infomation just entered*" << endl;
			displayInfo(stud, count);
			cout << "Which student information to display: ";
			getline(cin, placeHolder);
			answer = atoi(placeHolder.c_str());
			displayInfo(stud, count, answer);
			cout <<endl ;
			cout << endl << "*Displaying student infomation*" << endl;
			displayInfo(stud, count);
			placeHolder.clear();
			cout << endl << "Which student information to change: ";
			getline(cin, placeHolder);
			answer = atoi(placeHolder.c_str());
		changeInfo(stud, count, answer);
		cout << endl << "*Displaying changed student*" << endl;
		displayInfo(stud, count, answer);
		std::cin.get();
		delete[]stud;
	return 0;
}