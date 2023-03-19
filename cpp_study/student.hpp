#ifndef STUDENT_CLASS_HPP_
#define STUDENT_CLASS_HPP_

#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		
	public:
		string name;
		int age;
		enum class Gender{ NONE, MALE, FEMALE, OTHER,/*You can add "," after last elem in enum.*/ };
		Gender gender;
		Human(void);
		Human(string name_, int age_, Gender gender_);
		~Human(){
			//cout << "Human destructor is called." << endl;
		}
};

class Student : public Human
{
	public:
		int school_class;
		double grade;
		
		Student(void);
		Student(string name_, int age_, Gender gender_);
		Student(string name_, int age_, Gender gender_, int school_class_);
		~Student()
		{
			cout << "Student, the name [ " << this->name << "] 's destructor is called." << endl;

		}
		void print_gender();
		void print_student();
		

};



#endif //STUDENT_CLASS_HPP_