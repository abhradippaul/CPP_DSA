#include <iostream>
#include <iomanip>
using namespace std;

// int addition(int firstNumber, int secondNumber) {
//     return firstNumber + secondNumber;
// }

// void changeValue(unsigned short int& n) {
//     n = 20;
// }

int main() {
    // int firstNumber = 10, secondNumber = 20;
    // cout << "Enter the first number: ";
    // cin >> firstNumber;
    // cout << "Enter the second number: ";
    // cin >> secondNumber;
    // cout << "The sum of number " << firstNumber << " and " << secondNumber << " is " << addition(firstNumber,secondNumber) << endl;
    // unsigned short int n = 10;
    // cout << "Before changeValue, n = " << n << endl;
    // changeValue(n);
    // cout << "After changeValue, n = " << n << endl;
    // int decimal = 15, octal = 017, hexadecimal = 0xF, binary = 0b1111;
    // cout << "Decimal: " << decimal << endl;
    // cout << "Octal: " << octal << endl;
    // cout << "Hexadecimal: " << hexadecimal << endl;
    // cout << "Binary: " << binary << endl;
    // cout << "Size of int: " << sizeof(n) << " bytes" << endl;
    // float floatNumber = 5.5432453f; // Precision up to 7 digits
    // double doubleNumber = 5.5432453324234; // Precision up to 15 digits
    // long double longDoubleNumber = 5.5432453324234234234L; // Precision up to 19 digits
    // cout << "Size of float: " << sizeof(floatNumber) << " bytes" << endl;
    // cout << "Size of double: " << sizeof(doubleNumber) << " bytes" << endl;
    // cout << "Size of long double: " << sizeof(longDoubleNumber) << " bytes" << endl;

    // float non_zero_number = 456.7814f;
    // float zero_number = 0.0f;
    // float nan_value = 0.0f / 0.0f; // NaN (Not a Number)
    // cout << "Dviding a non-zero number by zero: " << non_zero_number / zero_number << endl; // Should print "inf"
    // cout << "Dviding zero by zero: " << nan_value << endl; // Should print "nan"
    // cout << "boolean size "<< sizeof(bool) << " bytes" << endl;
    // char char1 = 'a', char2 = 65;
    // cout << "char1: " << char1 << ", char2: " << char2 << endl;
    // cout << "value(int) " << static_cast<int>(char1) << ", " << static_cast<int>(char2) << endl;
    // cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    // auto var1 = 10ul    ; // unsigned long
    // auto var2 = 10.5f   ; // float
    // int value = 5;
    // cout << "value++ " << value++ << endl; // Should print 5, then value becomes 6
    // value = 5;
    // cout << "++value " << ++value << endl; // value becomes 7,

    cout << "This msg is being flushed " << endl << flush;
    cout << left; // Align to left
    cout << internal; // Align to internal
    cout << setfill('*'); // Set fill character to '*'
    cout << setw(10) << "Abhradip" << setw(10) << "Paul" <<endl; // Set width to 10 for each column
    cout << boolalpha; // Print bool as true/false
    cout << "Boolean value: " << (5 > 3) << endl; // Should print "true"
    cout << noboolalpha; // Print bool as 1/0
    cout << "Boolean value: " << (5 > 3) << endl; // Should print "1"
    cout << showpos; // Show '+' for positive numbers
    cout << "Positive number: " << 5 << endl; // Should print "+5"
    
    return 0;
}