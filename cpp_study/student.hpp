#ifndef STUDENT_CLASS_HPP_
#define STUDENT_CLASS_HPP_

#include <iostream>
#include <string>

using namespace std;

namespace Student_Gender
{
	enum class Gender
	{
		MALE,
		VEMALE
	};
}
class Student
{
	public:
		string name;
		int age;
		Student_Gender::Gender gender;
		void show_student();
};



#endif //STUDENT_CLASS_HPP_