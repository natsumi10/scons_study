#include <iostream>
#include <memory>
using namespace std;


#include "shared_ptr_test.hpp"
#include "gui_test.hpp"

//int main(int argc, char* argv[])
int main()
{
    std::cout << "Start main function!" << std::endl; 

    /* This is the function of shared_ptr test. */
    //shared_ptr_test();

    /* This is the function to use gui */
    gui_test();
    
    return 0;
    

}