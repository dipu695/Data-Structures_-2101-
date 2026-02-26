// have to find a target from a given array and have to print index number
#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == 2)
            return i; // IF FOUND
        // break; // as we are returing value that's why we don't need to break the loop.
    }
    return -1; // IF NOT FOUND
}
int main()
{
    int arr[] = {1, 2, 8, 6, 3, 7, 5};
    int sizee = 6;

    cout << linearSearch(arr, 6) << endl;
    return 0;
}