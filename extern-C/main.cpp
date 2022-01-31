#include <iostream>

using namespace std;

/**Element indeksi 0 dan boshlangan*/
/**
@author User
@param - a[] massiv
@param - index - indeksi
@see
*/
void delete_element(int a[], int index, int LENGTH){
    int vcount = 0;
    int new_arr[LENGTH];
    if(LENGTH!=0){
        for(int i = 0; i < index; i++){
            new_arr[i] = a[i];
            vcount++;
        }
        for(int j = index+1; j < LENGTH; j++){
            new_arr[vcount++] = a[j];
        }
    }
    for(int i = 0; i < vcount; i++){
            if(i!=vcount-1)
        cout << *(new_arr+i) << ", ";
    else cout << *(new_arr+i);
    }
    cout << "\b\b" << endl;
}

int main()
{
    int massiv[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(massiv) / sizeof(int);
    delete_element(massiv, 2, len);

    cout << endl;
    return 0;
}
