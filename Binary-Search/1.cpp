#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        //int mid = (st + end) / 2;
        int mid = st + (end - st)/2;//for code optimization 
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec;
    vec = {-1, 3, 6, 8, 9, 10}; // Even Size
    int target = 3;
    cout << "Even size: " << binarySearch(vec, target) << endl;

    vector<int> v;
    v = {1, 5, 9, 10, 11};//odd
    int T = 5;
    cout << "Odd size: " << binarySearch(v, T) << endl;

    return 0;
}