#include<iostream>
#include<vector>

using namespace std;
//recursive Binary search-----
int recBinarySearch(vector<int> vec , int tar , int st , int end)
{
    if(st <= end)
    {
        int mid = (st + end)/2;
        if(tar > vec[mid])
        {
           return recBinarySearch(vec , tar , mid + 1, end); 
        }
        else if(tar < vec[mid])
        {
            return recBinarySearch(vec , tar , st , mid - 1);
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
    vector<int>vec;
    vec = {1 , 2 , 3 , 4 , 5};
    int target = 3;
    int start = 0 , end = vec.size() - 1;


    cout << recBinarySearch(vec , target , start , end ) << endl;
    return 0;
}