#include <iostream>
#include <array>
using namespace std;

#include "line.hpp"
#include "mathLibrary.hpp"
#include "hello.hpp"
#include "goodbye.hpp"


int iterator_test()
{
	std::cout << "\nStart iterator_test method " << std::endl;
	
	int arr_test_normal[5] = {0,1,2,3,4};

	//This is the array for iterator.Can't use normal array above.
	std::array<int,5> arr_test = {0,1,2,3,4};

	std::cout << "\nStart Normal int array. " << std::endl;
	int num = sizeof(arr_test_normal)/sizeof(*arr_test_normal);
	std::cout << "size is " << num << std::endl;
	
	int i;
	for ( i=0; i < num; i++){
		//std::cout << "i = " << i << std::endl;
		std::cout << "num = " << arr_test_normal[i] << std::endl;
	}
	
	//Returns an iterator pointing to the past-the-end element in the sequence.
	// the past-the-end element means the element after the last element.
	std::cout << "\nStart vector (dynamic) array with iterator. " << std::endl;
	for( auto it = arr_test.begin(); it != arr_test.end(); ++it ){
		std::cout << "num = " << *it << std::endl;
	}

	std::cout << "\nStart another for loop with iterator. " << std::endl;
	for(auto&& e : arr_test){
		std::cout << "num = " << e << std::endl;
	}

	return 0;
}

int get_length()
{
	std::cout << "\nStart get_length method " << std::endl;
	float begin = 1.0;
	float end = 3.5;
	line_t line(begin, end);

	float length = line.GetLength();

	std::cout << "Length:" << length << std::endl;

	return 0;
}

int lib_test()
{
	std::cout << "\nStart lib_test method " << std::endl;
	double a = 7.4;
	double b = 20;

	mathLibrary::mathTest test(a, b);

	double ans = test.Add();

	std::cout << "a + b = " << ans << std::endl;

	return 0;
}

int main()
{
	std::cout << "\nThis is main function!" << std::endl;

	//hello();
	//goodbye();

	//lib_test();

	//get_length();

	//iterator_test();
	
	return 0;
}