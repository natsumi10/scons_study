#include <iostream>
#include <vector>

#include "student_class_test.hpp"
#include "student.hpp"

using namespace std;


int student_class_test(){
	cout << "\nThe student_class_test function is called.\n" << endl;
	
	// Create single instance test.
	Student students_a("Yamada Taro", 20, Human::Gender::MALE);
	//students_a.print_student();


	// Create array instance test.
	Student students_b[4] = {
		Student("array Yamada Taro", 20, Human::Gender::MALE),
		Student("array YAmamoto Hanako", 18, Human::Gender::FEMALE ),
		Student("array Tanaka Fujio", 21, Human::Gender::MALE),
		Student("array Yamashita Ayumi", 19, Human::Gender::FEMALE),
	};
	//students_b[1].print_student();

	// Create vector instance test.
	std::vector<Student> students_c = {
		Student("dynamic Yamada Taro", 20, Human::Gender::MALE),
		Student("dynamic YAmamoto Hanako", 18, Human::Gender::FEMALE ),
		Student("dynamic Tanaka Fujio", 21, Human::Gender::MALE),
		Student("dynamic Yamashita Ayumi", 19, Human::Gender::FEMALE),
	};
	students_c[2].print_student();
	// Release the dynamic array.
	std::vector<Student>().swap(students_c);

	/*
	Student student_test;
	cout << "\nstudent name is : " << student_test.name << endl;
	cout << "student age is : " << student_test.age << endl;

	
	/*
	// Usint pointer for student class test.
	class Student *student_ptr;
	student_ptr = &students[0];

	cout << "\nStudent name : " << student_ptr->name << endl;
	*/
	return 0;
}