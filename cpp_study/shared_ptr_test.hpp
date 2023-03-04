#ifndef SHARED_PTR_TEST_HPP_
#define SHARED_PTR_TEST_HPP_


int shared_ptr_test()
{
	// Use shared_ptr instead of int* x = new int(100);
    
    std::shared_ptr<int> x = std::make_shared<int>(100);

    // Here is one owner of shared_ptr

    {
    	/*
            You can shar the ownership via copy the shared_ptr
            variable as same as normal pointa.
        */
    	
        std::shared_ptr<int> y = x;    // We have two owner now.

    	std::cout << "y = "<< *y << std::endl;
    }
    
    // Because the block scope was closed, y is deleted and there is one owner.

    std::cout << "x = " << *x << std::endl;

    return 0;
}

#endif // SHARED_PTR_TEST_HPP_