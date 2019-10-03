#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {

    }
    virtual void print()
    {
        cout << "Parent" <<endl;
    }
};

class Child : public Parent
{   
public:
    Child()
    {
        
    }

    void print()
    {
        cout << "Child" <<endl;
    }
    template<class T, class U>
    T add(T a, U b)
    {
        return a + b;
    }
};

int main()
{
    Parent* p = new Parent();
    Parent* c = new Child();
    p->print();
    c->print();
    cout << c->add(2, 5) << endl;
    return 0;
}
