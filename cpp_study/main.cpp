#include <iostream>
#include <memory>
#include <vector>
using namespace std;


#include "shared_ptr_test.hpp"
//#include "gui_test.hpp"
#include "virtual_inheritance_1.hpp"
#include "virtual_inheritance_2.hpp"
#include "template_test.hpp"
#include "pointer_refference_test_1.hpp"
#include "pointer_refference_test_2.hpp"
#include "new_delete_test.hpp"
#include "vector_test.hpp"
#include "lambda_test.hpp"

#include "student.hpp"
#include "student_class_test.hpp"


//int main(int argc, char* argv[])
int main()
{
    std::cout << "Start main function!" << std::endl; 

    /* Comment out because I don't use there functions now.
    
    // This is the function of shared_ptr test. 
    shared_ptr_test();

    // This is the function to use gui 
    //gui_test();
    
    // This is the function about multiple inheritance
    virtual_inheritance_1();
    virtual_inheritance_2();

    // This is the function to use template function
    template_test();

    // The function to see how to use pointer and refference
    pointer_refference_test_1();

    // The function of pointer and refference as argument test. 
    pointer_refference_test_2();
    
    // Continue working.
    new_delete_test();
    
    // This is the function to study how class works via create student class.
    student_class_test();
    
    // This is the function to learn lambda.
    lambda_test();


    */
    
    // This is the function to learn vector.
    vector_test();
    
    

    
    return 0;
    

}