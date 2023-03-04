#include <iostream>
#include <memory>
using namespace std;
#include <gtkmm.h>

#include "shared_ptr_test.hpp"


class MyWindow : public Gtk::Window
{
public:
    MyWindow();
    virtual ~MyWindow() = default;
};

inline MyWindow::MyWindow()
{
    set_title("Test application");
    set_default_size(400,400);
}

int gui_test()
{
    auto app = Gtk::Application::create("work.gtkmm.examples");
    //auto app = Gtk::Application::create(argc, argv,"work.gtkmm.examples");

    MyWindow my_window;
    app->run(my_window);
    return 0;
    //return app->run(my_window);
}

//int main(int argc, char* argv[])
int main()
{
    std::cout << "Start main function!" << std::endl; 

    /* This is the function of shared_ptr test. */
    //shared_ptr_test();

    gui_test();
    
    return 0;
    

}