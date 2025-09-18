#include <iostream>
using namespace std;

int main()
{
    int int_value = 45;
    double double_value = 33.65;
    int &reference_to_int_value_1{int_value};
    int &reference_to_int_value_2 = int_value;
    double &reference_to_double_value_1 = double_value;
    int *pointer_to_int_value = &int_value;

    reference_to_int_value_1 = 12;

    cout << "Print out of the int_value " << int_value << endl;
    cout << "Print out of the &int_value " << &int_value << endl;
    cout << "Print out of the pointer_to_int_value " << pointer_to_int_value << endl;
    cout << "Print out of the *pointer_to_int_value " << *pointer_to_int_value << endl;
    cout << "Print out of the double_value " << double_value << endl;
    cout << "Print out of the &double_value " << &double_value << endl;
    cout << "Print out of the reference_to_int_value_1 " << reference_to_int_value_1 << endl;
    cout << "Print out of the &reference_to_int_value_1 " << &reference_to_int_value_1 << endl;
    cout << "Print out of the &reference_to_double_value_1 " << &reference_to_double_value_1 << endl;
    cout << "Print out of the reference_to_double_value_1 " << reference_to_double_value_1 << endl;

    // Changes are reflected on the orginal variable
    // Const references cannot be modified
    cout << "Lesson on references " << endl;
    return 0;
}