/*
4. WAP to illustrate static member function.

*/

#include <iostream>
using namespace std;

class Demo {
    static int val;
public:
    static void setVal(int v) { val = v; }
    static void display() { cout << "Value is: " << val << endl; }
};

int Demo::val = 0;

int main() {
    Demo::setVal(99);
    Demo::display();
    return 0;
}

