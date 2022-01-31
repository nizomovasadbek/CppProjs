#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    p += 10;

    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << p-&a << endl;

    return 0;
}
