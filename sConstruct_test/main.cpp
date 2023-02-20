#include <iostream>
using namespace std;

#include "line.h"
#include "mathLibrary.h"


int main()
{
	std::cout << "This is main function!" << std::endl;

	float begin = 1.0;
	float end = 3.5;
	line_t line(begin, end);

	float length = line.GetLength();

	std::cout << "Length:" << length << std::endl;

	double a = 7.4;
	double b = 20;

	mathLibrary::mathTest test(a, b);

	double ans = test.Add();

	std::cout << "a + b = " << ans << std::endl;

	return 0;
}