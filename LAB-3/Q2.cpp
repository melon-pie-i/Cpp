/*
2. WAP with two classes such that function members of one class use private members of another class.
*/

#include <iostream>
using namespace std;

class B;

class A {
    int dataA;
public:
    A(int val) : dataA(val) {}
    friend class B;
};

class B {
public:
    void showData(A &a) {
        cout << "Accessing A's private data: " << a.dataA << endl;
    }
};

int main() {
    A obj(50);
    B b;
    b.showData(obj);
    return 0;
}
