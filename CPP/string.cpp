#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    // cout << "C is alphanumeric " << isalnum('C') << endl;
    // cout << "^ is alphanumeric " << isalnum('^') << endl;
    // cout << "a is alphabetic " << isalpha('a') << endl;
    // char hello_text[]{"Hi my name is Abhradip Paul"};
    // int length = sizeof(hello_text) / sizeof(hello_text[0]);
    // char modified_upper_hello[length];
    // char modified_lower_hello[length];
    // // cout << "Printing my hello text " << hello_text << endl;
    // for (size_t i = 0; i < length; i++)
    // {
    //     *(modified_upper_hello + i) = toupper(*(hello_text + i));
    //     *(modified_lower_hello + i) = tolower(*(hello_text + i));
    // }
    // cout << "The modified upper case is " << modified_upper_hello << endl;
    // cout << "The modified lower case is " << modified_lower_hello << endl;

    // C string manipulation

    const char message1[]{"The sky is blue."};
    const char *message2{"The sky is blue."};
    char *new_message = new char[strlen(message1) + 1];
    strcpy(new_message, message1);
    const char *ref_to_message2 = new_message;
    char *is_blue = strchr(message1, 's');

    cout << "The s is on " << is_blue << endl;
    cout << "The length of message1 using using strlen is " << strlen(message1) << endl;
    cout << "The length of message2 using using strlen is " << strlen(message2) << endl;
    cout << "Concat string is  " << strcat(new_message, "Hello world") << endl;
    cout << *ref_to_message2 << endl;

    cout << "Lession string" << endl;
    return 0;
}