#include <iostream>
using namespace std;

#include "student.hpp"

Human::Human(void){
	cout << "Human default constructor is called." << endl;
	this->name = "";
	this->age = 0;
	this->gender = Gender::NONE;
}

Human::Human(string name_, int age_, Gender gender_){
	cout << "Human constructor is called." << endl;
	this->name = name_;
	this->age = age_;
}

Student::Student(void){
	cout << "Student default constructor is called." << endl;
	this->school_class = 0;
	this->grade = 0;
}

Student::Student(int school_class_, double grade_){
	cout << "Student constructor is called." << endl;
	school_class = school_class_;
	grade_ = grade_;
}

void Student::show_student()
{
	cout << "The show_student method is called.\n" << endl;
}