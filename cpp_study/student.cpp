#include <iostream>
using namespace std;

#include "student.hpp"

Human::Human(void){
	//cout << "Human default constructor is called." << endl;
	this->name = "";
	this->age = 0;
	this->gender = Gender::NONE;
}

Human::Human(string name_, int age_, Gender gender_){
	//cout << "Human constructor is called." << endl;
	if (age_< 0){
		this->age = 0;
	}else{
		this->age = age_;	
	}
	this->name = name_;
}

Student::Student(void){
	cout << "Student default constructor is called." << endl;
	this->school_class = 0;
	this->grade = 0;
}

Student::Student(string name_, int age_, Gender gender_){
	cout << "Student constructor is called." << endl;
	//cout << "Human constructor is called." << endl;
	if (age_< 0){
		this->age = 0;
	}else{
		this->age = age_;	
	}
	this->name = name_;
	this->gender = gender_;
	
}

Student::Student(string name_, int age_, Gender gender_, int school_class_){

}


// The method to print gender.
void Student::print_gender(){
	switch(this->gender){
	case Human::Gender::MALE :
		cout << "Gender : Male" << endl;
		break ;
	case Human::Gender::FEMALE :
		cout << "Gender : FEMALE" << endl;
		break ;
	case Human::Gender::NONE :
		cout << "Gender : NONE" << endl;
		break ;
	case Human::Gender::OTHER :
		cout << "Gender : OTHER" << endl;
		break ;
	default :
		cout << "error" << endl;
		break ;
	}
}


// The method to print indata of Student class.
// Note that this method call Student::print_gender method above.
void Student::print_student()
{
	
	//cout << "\nThe show_student method is called.\n" << endl;
	cout << "The name is : " << this->name << endl;
	cout << "The age is : " << this->age << endl;
	Student::print_gender();
	cout << endl;
}
