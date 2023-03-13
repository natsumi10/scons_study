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

class Person_B
{
	private:
		const char* name_;
		int age_;
		//enum gender_ { Male = "MALE", Female = "FEMALE"};
	public:
		Person_B(const char* name, int age) : 
										name_(name), age_(age)
		{
			cout << "\nPerson_B constructor is called.\n" << endl;
			cout << "name: " << name_ << endl;
			cout << "age: " << age_ << endl;
		}

		~Person_B(){
			cout << "Person_B destructor is called." << endl;
		}

		void print_person_b();
};

inline void Person_B::print_person_b(){
		cout << "\nperson name is : " << endl;
}

int new_delete_test()
{
	/*
	Person_B person_b[] = {
		{"Yamada Taro", 20, MALE},
		{"YAmamoto Hanako", 18, FEMALE },
		{"Tanaka Fujio", 21, MALE},
		{"Yamashita Ayumi", 19, FEMALE},
	};
	*/
	Person_B* person_b_1 = new Person_B("Yamada Taro", 20);

	person_b_1->print_person_b();

	delete person_b_1;
	return 0;
}

#endif //NEW_DELETE_TEST_HPP_