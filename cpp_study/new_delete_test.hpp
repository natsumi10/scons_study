#ifndef NEW_DELETE_TEST_HPP_
#define NEW_DELETE_TEST_HPP_

#include <iostream>
using namespace std;

/*
namespace Person_Scoped
{
	enum class Gender { MALE, FEMALE };

	void PrintGender(Gender gender)
	{
		if (gender == Gender::MALE)
		{
			cout << "gender: male" << endl;
		}else if(gender == Gender::FEMALE){
			cout << "gender: female" << endl;
		}
	}
}

*/

class Person_A
{
	private:
		const char* name_;
		int age_;
		//enum gender_ { Male = "MALE", Female = "FEMALE"};
	public:
		Person_A(const char* name, int age) : 
										name_(name), age_(age)
		{
			cout << "\nPerson_A constructor is called.\n" << endl;
			cout << "name: " << name_ << endl;
			cout << "age: " << age_ << endl;
		}

		~Person_A(){
			cout << "\nDestructor of Person_A is called." << endl;
		}

		void print_person_a();
};

inline void Person_A::print_person_a(){
		cout << "\nperson name is : " << name_ << endl;
}

int new_delete_test()
{
	/*
	Person_A person_a[] = {
		{"Yamada Taro", 20, MALE},
		{"YAmamoto Hanako", 18, FEMALE },
		{"Tanaka Fujio", 21, MALE},
		{"Yamashita Ayumi", 19, FEMALE},
	};
	*/
	//Person_A* person_a_1 = new Person_A("Yamada Taro", 20);

	class Person_A person_a01 = {"Yamada Taro", 20};

	person_a01.print_person_a();

	//delete person_a01;
	return 0;
}

#endif //NEW_DELETE_TEST_HPP_