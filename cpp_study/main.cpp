#include <iostream>
#include <memory>
using namespace std;


int shared_ptr_test()
{
	// Use shared_ptr instead of int* x = new int(100);
    std::shared_ptr<int> x = std::make_shared<int>(100);
    // Here is one owner of shared_ptr
    {
    	// You can shar the ownership via copy the shared_ptr 
    	// variable as same as normal pointa.
    	std::shared_ptr<int> y = x;
    	// We have two owner now.

    	std::cout << "y = "<< *y << std::endl;
    }
    // y is deleted and there is one owner.

    std::cout << "x = " << *x << std::endl;

    return 0;
}

int main()
{
	std::cout << "This is main function!" << std::endl;
	shared_ptr_test();
	return 0;
}