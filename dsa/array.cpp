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

// void moveZeros(int *arr, int size)
// {
//     // int count = 0;
//     // for (size_t i = 0; i < size; i++)
//     // {
//     //     if (*(arr + i) == 0)
//     //     {
//     //         count++;
//     //     }
//     // }

//     // for (size_t j = 1; j <= count; j++)
//     // {
//     //     for (size_t i = 0; i < size - j; i++)
//     //     {
//     //         if (*(arr + i) == 0)
//     //         {
//     //             int temp = *(arr + i + 1);
//     //             *(arr + i) = temp;
//     //             *(arr + i + 1) = 0;
//     //         }
//     //     }
//     // }

//     int j = 0;
//     for (size_t i = 0; i < size; i++)
//     {
//         if (arr[i] != 0 && arr[j] == 0)
//         {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//         if (arr[j] != 0)
//         {
//             j++;
//         }
//     }

//     printArray(arr, size);
// }

// int *resizeArray(int *arr, int size, int newCapacity)
// {
//     int *newArr = new int[newCapacity]();
//     for (int i = 0; i < size; i++)
//     {
//         *(newArr + i) = *(arr + i);
//     }
//     return newArr;
// }

int distinctNumber(int *arr, int size)
{
    // int number = 0;
    // for (size_t i = 1; i <= size; i++)
    // {
    //     bool is_present = false;
    //     for (size_t j = 0; j < size; j++)
    //     {
    //         if (*(arr + j) == i)
    //         {
    //             is_present = true;
    //         }
    //     }
    //     if (!is_present)
    //     {
    //         number = i;
    //     }
    // }
    int arrayTotal = 0;
    int totalValue = ((size + 1) * (size + 2)) / 2;
    for (size_t i = 0; i < size; i++)
    {
        arrayTotal = arrayTotal + *(arr + i);
    }

    return totalValue - arrayTotal;
}

int main()
{
    int length = 7;
    int *arr = new int[length]{2, 4, 1, 8, 6, 3, 7};
    // int* arr = new int[5];
    // Print array elements using a loop
    // removeEven(arr, length);
    // reverseArray(arr, length);
    // minimumValue(arr, length);
    // secondMaximumValue(arr, length);
    // moveZeros(arr, length);
    // int newCapacity = 10;
    // int *newArr = resizeArray(arr, length, newCapacity);
    // printArray(newArr, newCapacity);
    // delete[] arr;
    // arr = nullptr;
    cout << "Number is not present " << distinctNumber(arr, length) << endl;
    cout << "Successfully end" << endl;
    return 0;
}