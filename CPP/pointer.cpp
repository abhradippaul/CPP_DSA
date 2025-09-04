#include <iostream>
using namespace std;

int main()
{
    int val1 = 10;
    int *add_val1 = &val1;
    double *number = nullptr;
    cout << "The value of val1 is " << val1 << endl;
    cout << "The address of val1 is " << &val1 << endl;

    cout << "The value of add_val1 is " << add_val1 << endl;
    cout << "The value of add_val1 is " << *add_val1 << endl;

    cout << "size of int pointer is " << sizeof(add_val1) << " and the size of double pointer is " << sizeof(number) << endl;

    cout << "This is chapter for pointers." << endl;
    return 0;
}