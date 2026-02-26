//have to reverce a given array..we will use 2 pointer apporach..
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int start = 0;
    int end = 5;
    while (start < end)
    {
        swap(arr[start] , arr[end]);
        start++ ;
        end--;
    }
    for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++)
    {
        cout << "Reverced elements: " << arr[i] << endl;
    }
    return 0;
}