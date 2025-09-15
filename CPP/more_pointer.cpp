#include <iostream>
#include <string>
using namespace std;

// void increment(int *a)
// {
//     *a += 1;
// }

// void print(char *c)
// {
//     while (*c != '\0')
//     {
//         cout << *c;
//         c++;
//     }
//     cout << endl;
// }

int main()
{
    // int a = 10;  // int
    // int *p = &a; // int*
    // int **q = &p;  // int**
    // int ***r = &q; // int***
    // cout << "Value of a is " << a << endl;
    // cout << "Value of p is " << p << endl;
    // cout << "Value of *p is " << *p << endl;
    // cout << "Value of q is " << q << endl;
    // cout << "Value of *q is " << *q << endl;
    // cout << "Value of **q is " << **q << endl;
    // cout << "Value of r is " << r << endl;
    // cout << "Value of *r is " << *r << endl;
    // cout << "Value of **r is " << **r << endl;
    // cout << "Value of ***r is " << ***r << endl;
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

    // cout << "Pointer as function arguments - Call by reference" << endl;
    // increment(&a);
    // cout << "Value of a is " << a << endl;
    // cout << "Pointer and Array" << endl;
    // int arr[] = {1, 2, 3, 4, 5};
    // int *p_arr = arr;
    // // cout << *p_arr << endl;
    // // Address -> &arr[i] or (arr + 1)
    // // Value -> arr[i] or *(arr + 1)
    // cout << "Print array using pointer" << endl;
    // for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     cout << *(arr + i) << " ";
    // }

    // cout << endl;

    // char c[] = "Abhra";
    // char *p_char = c;
    // string c = "Abhra";
    // cout << "Size of string is " << sizeof(c) << endl;
    // cout << "Value of c is " << c << endl;
    // cout << "Value of p_char is " << p_char << endl;
    // cout << "Value of *p_char is " << *p_char << endl;
    // print(c);
    // char *c_const = "hello"; // String gets stored as compile time constant
    // c_const[0] = 'A'; // Cannot be done
    // Pointer with 2d array
    // int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // cout << b[0][0];
    // cout << b[0][1];
    // cout << b[0][2];
    // cout << endl;
    // cout << b[1][0];
    // cout << b[1][1];
    // cout << b[1][2];
    // cout << endl;
    // cout << "Value of *b is " << *b << endl;
    // cout << "Value of *(*b) is " << *(*b) << endl;
    // cout << "Value of *(*b + 1) is " << *(*b + 1) << endl;
    // cout << "Value of *(*b + 2) is " << *(*b + 2) << endl;
    // cout << "Value of *(*(b + 1)) is " << *(*(b + 1)) << endl;
    // cout << "Value of *(*(b + 1) + 1) is " << *(*(b + 1) + 1) << endl;
    // cout << "Value of *(*(b + 1) + 2) is " << *(*(b + 1) + 2) << endl;
    // int (*p_arr)[3] = b;
    // for (size_t i = 0; i < sizeof(b) / sizeof(b[0]); i++)
    // {
    //     for (size_t j = 0; j < sizeof(b[0]) / sizeof(b[0][0]); j++)
    //     {
    //         cout << *(*(b + i) + j);
    //     }
    //     cout << endl;
    // }
    // int a; // Goes on stack
    // int *p = new int;
    // *p = 10;
    // cout << "Value of p is " << p << endl;
    // cout << "Value of *p is " << *p << endl;
    // delete p;
    // p = nullptr;
    // p = new int[10];
    // cout << "Enter the value ";
    // cin >> *p;
    // cout << "Value of p is " << p << endl;
    // cout << "Value of *p is " << sizeof(p) << endl;
    // cout << "Value of *p is " << *p << endl;
    // char msg[] = "hello world";
    char *p_message = "hello world";

    cout << *p_message;

    cout << "This is more on pointer";
    return 0;
}