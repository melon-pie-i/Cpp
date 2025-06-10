/*
5. WAP using this pointer to return an object of class from a member function of class.
*/

#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int val) : x(val) {}
    Demo& increment() {
        x++;
        return *this; // returns object itself
    }
    void show() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d(5);
    d.increment().increment(); // chained call
    d.show(); // Should print 7
    return 0;
}


