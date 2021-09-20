#include <iostream>

//simple program for showing how pointers + arrays work
using namespace std;
const int MAX = 5;

int main(){
    int var[MAX] = {10, 20, 50, 100, 200};
    int *ptr[MAX]; //declares ptr as array of integer points

    for (int i = 0; i < MAX; i++){
        ptr[i] = &var[i]; //assign to address of integer
    }

    //cycle through array
    for (int i = 0; i < MAX; i++){
        cout << "Value: [" << i << "] = "; //print values in array
        cout << *ptr[i] << endl;
        cout << "Memory location: " << ptr << "\n\n"; //print memory address of ptr
        cout << '\a'; //I like the ding lol
    }

    return 0;
}
