#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &vec)
{
    int temp = 0;
    for (int val : vec)
    {
        temp ^= val;
    }
    return temp;
}

void maximumSubArraySum(vector<int> &vec)
{
    const int length = vec.size();
    int max = 0;
    for (size_t start = 0; start < length; start++)
    {
        int temp = 0;
        for (size_t end = start; end < length; end++)
        {
            temp += vec[end];
            // for (size_t i = start; i <= end; i++)
            // {
            //     temp += vec[i];
            //     cout << vec[i];
            // }
            if (temp > max)
            {
                max = temp;
            }
        }
    }
    cout << "The max is " << max << endl;
}

// Kadane's Algorithm
void maximumSubArraySumWithKadaneAlgo(vector<int> &vec)
{
    const int length = vec.size();
    int maxSum = 0;
    int currSum = 0;
    for (size_t i = 0; i < length; i++)
    {
        currSum += vec[i];
        maxSum += currSum;
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}

int main()
{
    // vector<int> vec;
    // vector<int> vec = {1, 2, 3};
    // // vector<int> vec(3,0);
    // cout << "Vector size is " << vec.size() << endl;
    // vec.push_back(0);
    // vec.pop_back();
    // cout << "Vector size is " << vec.size() << endl;
    // cout << "Vector capacity is " << vec.capacity() << endl;
    // vector<int> vec = {4, 1, 4, 7, 7, 8, 8};
    // cout << "Unique value in vector is " << singleNumber(vec) << endl;
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    maximumSubArraySum(vec);
    cout << "Learning vector" << endl;
    return 0;
}