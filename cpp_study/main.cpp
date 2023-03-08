#include <iostream>
#include <memory>
using namespace std;


#include "shared_ptr_test.hpp"
//#include "gui_test.hpp"
#include "virtual_inheritance_1.hpp"
#include "virtual_inheritance_2.hpp"
#include "template_test.hpp"
#include "pointer_refference_test.hpp"

//int main(int argc, char* argv[])
int main()
{
    std::cout << "Start main function!" << std::endl; 

    /* This is the function of shared_ptr test. */
    //shared_ptr_test();

    /* This is the function to use gui */
    //gui_test();
    
    /* This is the function about multiple inheritance */
    virtual_inheritance_1();
    virtual_inheritance_2();

    /* This is the function to use template function */
    template_test();

    return 0;
    

}