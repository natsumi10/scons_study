#ifndef POINTER_REFFERENCE_TEST_2_HPP_
#define POINTER_REFFERENCE_TEST_2_HPP_

#include <iostream>
#include <cstdlib>
using namespace std;

enum Gender
{
	MALE,
	FEMALE
};

struct Person
{
	char name[50];
	int age;
	enum Gender gender;
};

void showPerson(Person[], int);
void showPerson(Person&);

void showPerson(Person p[], int len)
{
	for (int i = 0; i < len; i++)
	{
		showPerson(p[i]);
		cout << endl;
	}
}

// argument p is call by refference
void showPerson(Person &p)
{
	cout << "name: " << p.name << "\n";
	cout << "age: " << p.age << "\n";
	if(p.gender == MALE)
	{
		cout << "gender: male" << endl;
	}else{
		cout << "gender: female" << endl;
	}
}

// person is call by refference
void pointer_with_struct_test( Person& person)
{
	struct Person* person_ptr_1;
	person_ptr_1 = &person;
	cout << "pointer test name : " << person_ptr_1->name << endl;

	struct Person* person_ptr_2;
	person_ptr_2 = (Person*)malloc(sizeof(Person));
	
	if(person_ptr_2 != NULL){
		person_ptr_1++;
		*person_ptr_2 = *person_ptr_1;
		cout << "pointer test name : " << person_ptr_2->name << endl;
	}
	free(person_ptr_2);
}

int pointer_refference_test_2()
{
	
	cout << "\nStart pointer_refference_test_2 function.\n" << endl;

	Person person[] = {
		{"Yamada Taro", 20, MALE},
		{"YAmamoto Hanako", 18, FEMALE },
		{"Tanaka Fujio", 21, MALE},
		{"Yamashita Ayumi", 19, MALE},
	};
	showPerson(
		person,
		sizeof(person) / sizeof(person[0])
	);
	//std::cin.get();

	pointer_with_struct_test(person[0]);

	


	return 0;
}

#endif //POINTER_REFFERENCE_TEST_2_HPP_