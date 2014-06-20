#include <iostream>

using namespace std;

class Contact 
{
public:
    void say_hello()
    {
        cout << "Contact says hello" << endl;
    }

    virtual void say_goodbye()
    {
        cout << "Contact says goodbye" << endl;
    }

};

class Friend : public Contact
{

int a;

public:
    void say_hello()
    {
        cout << "Friend says hello" << endl;
    }

    void say_yes()
    {
        cout << "Friend says yes" << endl;
    }

    void say_goodbye()
    {
        cout << "Friend says goodbye" << endl;
    }

};


int main()
{
    Contact* c = new Friend;
    c->say_hello();
    c->say_goodbye();

    Friend* f = static_cast<Friend*>(c);
    f->say_hello();

    Contact* d = new Contact;
    Friend* e = static_cast<Friend*>(d);
    e->say_goodbye();
    e->say_yes();

    delete c;
    delete d;
    return 0;
}



