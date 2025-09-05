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
    // cout << "Value of number is " << *number;

    char char_value = 'a';
    char *char1 = &char_value;
    cout << "The address value is " << char1 << endl;
    cout << "The value of the address is " << *char1 << endl;

    char p_arr[] = "hello world";
    char *p_message = p_arr;

    cout << "Output of p message is " << p_message << " " << *p_message << endl;
    p_arr[2] = 'L';
    cout << "After changing value " << p_message << endl;

    int *heap_int = nullptr;
    // heap_int = new int(30);
    heap_int = new int;
    *heap_int = 30;

    cout << "value of the pointer is " << *heap_int << endl;
    delete heap_int;
    heap_int = nullptr;

    // Dangling pointer
    // int *p_number;
    // int *p_number = new int(78);
    // delete p_number;
    // cout << *p_number;
    // int *p_number3 = new int(12);
    // int *p_number4 = p_number3;
    // delete p_number3;
    // cout << *p_number4;

    cout << "This is chapter for pointers." << endl;
    return 0;
}