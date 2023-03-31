#include <iostream>

using namespace std;

void lambda_test(){
	auto a = 10;
	auto b = 20;

	auto func1 = []() {cout << "Start lambda_test function."<< endl; };
	func1();

	auto func2 = [=]() {cout << "a = " << a << ", b =" << b << endl; };
	func2();

	auto func3 = [=]() mutable {a += 10; cout << "a = " << a << ", b =" << b << endl; };
	func3();
	cout << "a = " << a << ", b =" << b << endl;

	auto func4 = [&]() {a += 10; b+= 10; };
	func4();
	cout << "a = " << a << ", b =" << b << endl;
}