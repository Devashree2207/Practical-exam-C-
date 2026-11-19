#include <iostream>
using namespace std;

class Animal 
{
public:
    virtual void sound() = 0;  
    virtual void move()  = 0;
};

class Dog : public Animal {
public:
    void sound()  { cout << "Dog bark: Woof! Woof!" << endl; }
    void move()  { cout << "Dog runs on four legs." << endl; }
};

class Bird : public Animal {
public:
    void sound()  { cout << "Bird sing: Tweet! Tweet!" << endl; }
    void move()  { cout << "Bird flies with its wings." << endl; }
};

int main() 
{
    Dog d;
    Bird b;

    Animal *a[2];
    a[0] = &d;
    a[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        a[i]->sound();
        a[i]->move();
        cout << endl;
    }

    return 0;
}
