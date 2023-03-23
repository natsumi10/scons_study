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
		Human( const string name_, const int age_, const Gender gender_);
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
		Student(const string name_, const int age_, const Gender gender_);
		Student(const string name_, const int age_, const Gender gender_,
												const int school_class_);
		~Student()
		{
			cout << "Student, the name [ " << this->name << "] 's destructor is called." << endl;

		}
		void print_gender();
		void print_student();
		

};



#endif //STUDENT_CLASS_HPP_