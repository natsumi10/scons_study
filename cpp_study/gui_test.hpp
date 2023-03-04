#ifndef GUI_TEST_HPP_
#define GUI_TEST_HPP_

#include <gtkmm.h>

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

#endif // GUI_TEST_HPP_