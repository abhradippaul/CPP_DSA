#include <iostream>
using namespace std;

void printArray(int *arr, int length)
{

    // Print array elements using a loop
    for (int i = 0; i < length; i++)
    {
        cout << *(arr + i) << " ";
    }
    // cout << *(arr + 3);
    cout << endl;
}

// int *removeZerosFromArray(int *arr, int size)
// {
//     int *formatted_array = new int[size]();
//     for (size_t i = 0; i < size; i++)
//     {
//         *(formatted_array + i) = *(arr + i);
//     }
//     return formatted_array;
// }

// void removeEven(int *arr, int length)
// {
//     int count = 0;
//     for (size_t i = 0; i < length; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             count++;
//         }
//     }

//     int *oddArray = new int[count]();
//     int j = 0;
//     for (int i = 0; i < length; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             *(oddArray + j) = *(arr + i);
//             j++;
//         }
//     }
//     // cout << "Array after removing even numbers: " << newInt << endl;
//     printArray(oddArray, count);
// }

// void reverseArray(int *arr, int size)
// {
//     int start = 0, end = size - 1, temp = 0;
//     while (start < end)
//     {
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
//     printArray(arr, size);
// }

// void minimumValue(int *arr, int size)
// {
//     int min = arr[0];
//     for (size_t i = 1; i < size; i++)
//     {
//         if (*(arr + i) < min)
//         {
//             min = *(arr + i);
//         }
//     }
//     cout << "The minimum value is " << min << endl;
// }

// void secondMaximumValue(int *arr, int size)
// {
//     int max = 0, secondMax = 0;
//     for (size_t i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             secondMax = arr[i];
//         }
//         else if (arr[i] > secondMax && arr[i] != max)
//         {
//             secondMax = arr[i];
//         }
//     }

//     cout << "Second max value is " << secondMax << endl;
// }

void transformArray(int *arr, int size)
{
    int count = 0;
    int temp = 0;
    for (size_t i = 0; i < size; i++)
    {
        if (*(arr + i) == 0)
        {
            count++;
        }
    }

    for (size_t j = 1; j <= count; j++)
    {
        for (size_t i = 0; i < size - j; i++)
        {
            if (*(arr + i) == 0)
            {
                temp = *(arr + i + 1);
                *(arr + i) = temp;
                *(arr + i + 1) = 0;
            }
        }
    }

    printArray(arr, size);
}

int main()
{
    int arr[] = {0, 1, 0, 4, 12, 3, 4, 0, 3, 1, 0, 7, 3, 0, 12, 0, 6};
    // int* arr = new int[5];
    // Print array elements using a loop
    int length = sizeof(arr) / sizeof(arr[0]);
    // removeEven(arr, length);
    // reverseArray(arr, length);
    // minimumValue(arr, length);
    // secondMaximumValue(arr, length);
    transformArray(arr, length);
    cout << "Successfully end" << endl;

    return 0;
}