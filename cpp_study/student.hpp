#ifndef STUDENT_CLASS_HPP_
#define STUDENT_CLASS_HPP_

#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		enum class Gender{ NONE, MALE, FEMALE, OTHER };
	public:
		string name;
		int age;
		Gender gender;
		Human(void);
		Human(string name_, int age_, Gender gender_);
		~Human(){
			cout << "Human destructor is called." << endl;
		}
};

class Student : public Human
{
	public:
		int school_class;
		double grade;
		void show_student();
		Student(void);
		Student(int school_class_, double grade_);
		~Student(){
			cout << "Student destructor is called." << endl;
		}
};



#endif //STUDENT_CLASS_HPP_