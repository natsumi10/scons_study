#ifndef POINTER_REFFERENCE_TEST_1_HPP_
#define POINTER_REFFERENCE_TEST_1_HPP_

#include <iostream>
using namespace std;

int test_1()
{
	
	int num_a = 123;
	int num_b = 456;

	int* a_pointer = &num_a;
	int& a_refference = num_a;

	// The pointer point to num_b
	a_pointer = &num_b;
	// The result : "num_a = 123" 
	cout << "num_a = " << num_a << endl;
	cout << "The value of a_pointer = " << *a_pointer << endl;

	// Because a_refference is the refference, the value of num_a will be changed.
	a_refference = num_b;
	// The result : "num_a = 456" 
	cout << "num_a = " << num_a << endl;

	return 0;
}

int pointer_refference_test_1()
{
	cout << "\nStart pointer_refference_test_1 function." << endl;
	test_1();
	return 0;
}

#endif //POINTER_REFFERENCE_TEST_1_HPP_