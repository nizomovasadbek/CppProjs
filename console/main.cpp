#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int *p = &a;
    p+=10;

    cout << p-&a << endl;

    return 0;
}
