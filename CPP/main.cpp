#include <iostream>
using namespace std;

int addition(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int main() {
    int firstNumber, secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << "The sum of number " << firstNumber << " and " << secondNumber << " is " << addition(firstNumber,secondNumber) << endl;
    return 0;
}