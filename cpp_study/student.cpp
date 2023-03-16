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

Student::Student(string name_, int age_, Gender gender_){
	cout << "Student constructor is called." << endl;
	this->name = name_;
	this->age = age_;
	this->gender = gender_;
	
}

Student::Student(string name_, int age_, Gender gender_, int school_class_){

}

void Student::print_gender(){
	
}

void Student::print_student()
{
	cout << "\nThe show_student method is called.\n" << endl;
	cout << "The name is : " << this->name << endl;
	cout << "The age is : " << this->age << endl;
	cout << endl;
}