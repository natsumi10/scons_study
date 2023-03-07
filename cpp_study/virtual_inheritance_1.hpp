#ifndef HOWTOFIX_DIAMOND_PROBLEM_1_HPP_
#define HOWTOFIX_DIAMOND_PROBLEM_1_HPP_

#include <iostream>
using namespace std;

class Base
{	//Base class
	private:
		int num;

	public:
		Base(int n) : num(n)
		{
			cout << "Base::Base(int) called" << endl;
		}

		void Print()
		{
			cout << "Base: " << num << endl;
		}
};

class DerivedA : public virtual Base
{	//Virtual inheritance
	public:
		DerivedA() : Base(1)
		{
			cout << "DerivedA::DerivedA() called" << endl;
		}
};

class DerivedB : public virtual Base
{
	public:
		DerivedB() : Base(2)
		{
			cout << "DerivedB::DerivedB() called" << endl;
		}
};

class DerivedX : public DerivedA, public DerivedB
{
public:
	DerivedX(int n) : Base(n)
	{
		cout << "DerivedX::DerivedX(int) called" << endl;
	}
};

int virtual_inheritance_1()
{
	cout << "\nvirtual_inheritance_1() called.\n" << endl;

	DerivedX dx(10);

	dx.DerivedA::Print();
	dx.DerivedB::Print();
	dx.Print();
	return 0;
}

#endif //HOWTOFIX_DIAMOND_PROBLEM_1_HPP_