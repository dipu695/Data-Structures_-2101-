// have to find a target from a given array and have to print index number
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 8, 7};
    int indx;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] == 5)
        {
            indx = i;
            break;
        }
    }
    cout << "Index: " << indx << endl;
    return 0;
}