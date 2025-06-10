/*
3. WAP to illustrate the use of static data member in a class.

*/



#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void showCount() {
        cout << "Count is: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;
    Counter::showCount(); // Should print 3
    return 0;
}
