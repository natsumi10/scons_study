#include <iostream>
using namespace std;

#include "student_class_test.hpp"
#include "student.hpp"

int student_class_test(){
	cout << "\nThe student_class_test function is called.\n" << endl;
	
	Student student_1;
	cout << "\nstudent name is : " << student_1.name << endl;
	cout << "student age is : " << student_1.age << endl;

	/*
	class Student students[] = {
		{"Yamada Taro", 20, MALE},
		{"YAmamoto Hanako", 18, FEMALE },
		{"Tanaka Fujio", 21, MALE},
		{"Yamashita Ayumi", 19, MALE},
	};

	// Usint pointer for student class test.
	class Student *student_ptr;
	student_ptr = &students[0];

	cout << "\nStudent name : " << student_ptr->name << endl;
	*/
	return 0;
}