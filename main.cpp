#include <iostream>

//simple program for showing how pointers + arrays work
using namespace std;
const int MAX = 10;
string msg = "Press any key to keep going";

int main(){

    string *msgptr = &msg;

    int var01[MAX] = {10, 20, 50, 100, 200, 300, 400, 500, 1000, 2000};
    int *ptr01[MAX]; //declares ptr as array of integer points

    int var02[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr02[MAX];

    for (int i = 0; i < MAX; i++){
        ptr01[i] = &var01[i]; //assign to address of integer array
        ptr02[i] = &var02[i];
    }

    //cycle through first array
    for (int i = 0; i < MAX; i++){
        cout << "Value: [" << i << "] = "; //print values in array
        cout << *ptr01[i] << endl;
        cout << "Memory location: " << ptr01 << "\n"; //print memory address of ptr
        cout << '\a'; //I like the ding lol
    }

    cout << "\n" << msg << "\n";
    cin.get();

    for (int i = 0; i < MAX; i++){
        cout << "Value : [" << i << "] = ";
        cout << *ptr02[i] << endl;
        cout << "Memory location: " << ptr02 << "\n";
        cout << '\a';

        //cin.get();
    }

    cout << "\nMemory location of msg (" << msg << "): " << msgptr << "\n";

    return 0;
}



