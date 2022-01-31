#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("color a");
    short a = 0;
    while(true){
        cout << "Dasturdan chiqish uchun -1 ni kiriting!" << endl << endl;
        cout << "Video formatini tanlang: " << endl;
        cout << "1. 144p" << endl;
        cout << "2. 240p" << endl;
        cout << "3. 360p" << endl;
        cout << "4. 480p" << endl;
        cout << "5. 720p" << endl;
        cout << "6. 1080p" << endl;

        cin >> a;

        if(a==-1) break;

        switch(a){
            case 1: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 176Kbps ishlashi kerak" << endl; break;
            case 2: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 440Kbps ishlashi kerak" << endl; break;
            case 3: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 664Kbps ishlashi kerak" << endl; break;
            case 4: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 1,5Mbps ishlashi kerak" << endl; break;
            case 5: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 3,36Mbps ishlashi kerak" << endl; break;
            case 6: cout << "Sizning internetingiz bu formatdagi videoni ochishi uchun kamida 6,64Mbps ishlashi kerak" << endl; break;
            default: continue;
        }

        system("pause");
        system("cls");
    }

    system("pause");
    return 0;
}
