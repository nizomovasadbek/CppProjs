#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=0, b=0, c=0;
    int yig = 0;
    int n=0;
    int uch = 0;

    for(int i = 123; i <= 654; i++){ //936
        a = i/100;
        b = (i-(a*100))/10;
        c = i-((a*100)+(b*10));
        if(a<1||b<1||c<1) continue;
        if(a>6||b>6||c>6) continue;
        //if(a==b||b==c||a==c) continue;
        yig = a+b+c;
        uch = yig/3;
        if((uch*3)==yig){
            n++;
            cout << i << endl;
        }
    }

    cout << "Umumiy: " << n << " ta" << endl;

    return 0;
}
