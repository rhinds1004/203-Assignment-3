#include <iostream>
#include <string>
#include "student.h"
using namespace std;


int main()
{
	int count = 0;
		std::string placeHolder;
			std::cout << "How many student profiles to create:";
		std::getline(std::cin, placeHolder);
			count = atoi(placeHolder.c_str());
			Student * stud = createStudent(count);
		changeInfo(stud, 3, 11111);
		std::cin.get();
		delete[]stud;
	return 0;
}