#include <iostream>
using namespace std;

int main()
{
    cout << "This is array chapter" << endl;

    int scores[3] = {85, 90, 78};

    // for (size_t i = 0; i < 3; i++)
    // {
    //     cout << "Current score is: " << scores[i] << endl;
    // }

    for (auto value : scores)
    {
        cout << "Current score is: " << value << endl;
    }

    cout << "Size of the array is " << sizeof(scores) / sizeof(scores[0]) << endl;

    return 0;
}