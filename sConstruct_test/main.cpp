#include <iostream>
using namespace std;

#include "line.h"
#include "mathLibrary.h"

int iterator_test()
{
	std::cout << "\nStart iterator_test method " << std::endl;
	int arr_test[5] = {0,1,2,3,4};
	int num = sizeof(arr_test)/sizeof(*arr_test);
	std::cout << "size is " << num << std::endl;

	int i;
	for ( i=0; i < num; i++){
		std::cout << "i = " << i << std::endl;
		std::cout << "num = " << arr_test[i] << std::endl;
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

	lib_test();

	get_length();

	iterator_test();
	
	return 0;
}