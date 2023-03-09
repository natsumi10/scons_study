#ifndef HOWTOFIX_DIAMOND_PROBLEM_2_HPP_
#define HOWTOFIX_DIAMOND_PROBLEM_2_HPP_

#include <iostream>
using namespace std;

class Base_2
{	//Base_2 class
	
	public:
		Base_2()
		{
			cout << "Base_2::Base_2() called" << endl; //Base constructor
		}
		Base_2(int n)
		{
			cout << "Base_2::Base_2(int) called" << endl;
		}
};

class DerivedA_2 : virtual public Base_2
{	//class DerivedA_2 inherits Base_2
	public:
		DerivedA_2(int n) : Base_2(n)
		{
			cout << "DerivedA_2::DerivedA_2(int) called" << endl;
		}
};

class DerivedB_2 : virtual public Base_2
{	//class DerivedB_2 inherits Base_2
	public:
		DerivedB_2(int n) : Base_2(n)
		{
			cout << "DerivedB_2::DerivedB_2(int) called" << endl;
		}
};

class DerivedX_2 : public DerivedA_2, public DerivedB_2
{	//class Child inherits DerivedA_2 and DerivedB_2
public:
	DerivedX_2(int n) : DerivedA_2(n), DerivedB_2(n)
	{
		cout << "DerivedX_2::DerivedX_2(int) called" << endl;
	}
};

int virtual_inheritance_2()
{
	cout << "\nvirtual_inheritance_2 called.\n" << endl;
	DerivedX_2 dx(30);

	return 0;
}

#endif //HOWTOFIX_DIAMOND_PROBLEM_2_HPP_