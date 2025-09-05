#include <iostream>
using namespace std;

int main()
{
    int a = 10;    // int
    int *p = &a;   // int*
    int **q = &p;  // int**
    int ***r = &q; // int***
    // cout << "Pointer Arithmetic" << endl;
    // cout << "Size of integer is " << sizeof(int) << endl;
    // cout << "Size of interger pointer is " << sizeof(int *) << endl;
    // cout << "Value of the var is " << *p << endl;
    // cout << "Value of +1 is " << *(p + 1) << endl;
    // Void pointer - Genric pointer
    // void *p0 = p;
    // cout << "Printing address of void pointer " << p0 << endl;
    // cout << "Printing value in the void pointer " << *p0 << endl; // This will not work
    // char *c = p; // This will not work need to typecast the pointer
    // char *c;
    // c = (char *)p;
    // cout << "The value is " << *c; // This will print only one byte of value

    cout << "This is more on pointer";
    return 0;
}