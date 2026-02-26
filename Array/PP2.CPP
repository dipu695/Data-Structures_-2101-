// HAVE TO FIND SMALLEST OR LARGEST VALUS'S INDEX..
#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 5, 1, 3, -8, 4, -200};
    int largest = INT_MIN;
    int index;
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }
    cout << "Largest values index: " << index << endl;
    return 0;
}