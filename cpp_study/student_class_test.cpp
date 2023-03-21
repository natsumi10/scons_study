#include <iostream>
#include <vector>
#include <memory>

#include "student_class_test.hpp"
#include "student.hpp"

using namespace std;

Student create_single_instance_test(){
	/* Create a single of instance student class for test.
	*/
	// Create single instance test.
	Student students_a("single Yamada Taro", 20, Human::Gender::MALE);
	//students_a.print_student();
	return students_a;
}


// Create some instances with array test.
// You can use unique pointer to controll memory easily.
std::unique_ptr<Student[]> create_four_student_test()
{
	std::unique_ptr<Student[]> students_b_ptr;
	students_b_ptr = std::make_unique<Student[]>(4);

	// Because unique pointer only use movoe assignment, the destructor is called each time.
	students_b_ptr[0] = Student("smart pointer array Yamada Taro", 20, Human::Gender::MALE);
	students_b_ptr[1] = Student("smart pointer array YAmamoto Hanako", 18, Human::Gender::FEMALE );
	students_b_ptr[2] = Student("smart pointer array Tanaka Fujio", 21, Human::Gender::MALE);
	students_b_ptr[3] = Student("smart pointer array Yamashita Ayumi", 19, Human::Gender::FEMALE);

	return students_b_ptr;
}


void print_single_student_object(Student &student)
{
	cout << endl;
	student.print_student();
}

void print_multiple_students_object(std::unique_ptr<Student[]> & students_ptr, int number)
{
	cout << "\n" << endl;
	// Note that unique_ptr cannnot use range based for. For example, "for (const auto& e : v)."
	// You had better use vector in this case.
	for( int i = 0; i < number; ++i )
	{
		students_ptr[i].print_student();
	}
	cout << "\n" << endl;
}


int student_class_test(){
	cout << "\nThe student_class_test function is called.\n" << endl;
	/*
	// Create a single instance of student class.
	Student students_a = create_single_instance_test();
	// Print to check.
	//students_a.print_student(); 
	*/
	
	
	// Create some instances with array test.
	// You can use unique pointer instead of using a pointer. The best way is using vector. 
	std::unique_ptr<Student[]> students_b_ptr = create_four_student_test();
	// Print all students name to check this works.
	print_single_student_object(students_b_ptr[0]);
	print_multiple_students_object(students_b_ptr, 4);
	
	
	

	/*
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