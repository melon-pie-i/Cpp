/*
1. WAP to add and swap private data of two different classes. Use separate function for add and swap.
*/

#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int val) : x(val) {}
    friend int add(A, B);
    friend void swap(A&, B&);
    void show() { cout << "A: " << x << endl; }
};

class B {
    int y;
public:
    B(int val) : y(val) {}
    friend int add(A, B);
    friend void swap(A&, B&);
    void show() { cout << "B: " << y << endl; }
};

int add(A a, B b) {
    return a.x + b.y;
}

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A obj1(10);
    B obj2(20);
    
    cout << "Before swap:" << endl;
    obj1.show();
    obj2.show();

    cout << "Addition: " << add(obj1, obj2) << endl;

    swap(obj1, obj2);

    cout << "After swap:" << endl;
    obj1.show();
    obj2.show();
    
    return 0;
}
