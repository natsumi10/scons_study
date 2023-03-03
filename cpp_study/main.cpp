#include <iostream>
#include <memory>
using namespace std;
#include <gtkmm.h>



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


class MyWindow : public Gtk::Window
{
public:
    MyWindow();
};

MyWindow::MyWindow()
{
    set_title("Basic application");
    set_default_size(400,400);
}


int main()
{
	std::cout << "This is main function!" << std::endl;
	//shared_ptr_test();
    
    auto app = Gtk::Application::create("examples.base");
    MyWindow my_window;
    return app->run(my_window);
    
    //return app->make_window_and_run<MyWindow>("gtkmm tutorial");
	/*
    Gtk::Main kit("gtkmm tutorial");
    Gtk::Window GtkmmTutorial;
    GtkmmTutorial.set_default_size(400, 400);
    Gtk::Main::run(GtkmmTutorial);
    */
    //return 0;
}