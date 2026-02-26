#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>v , int tar)
{
    int st = 0 , end = v.size() - 1;
    while(st <= end)
    {
        int mid = (st + end)/2;

        if(tar > v[mid])
        {
            st = mid + 1;
        }
        else if(tar < v[mid])
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
    vector < int > vec = {1 , 3 , 8 , 10 , 12 , 30};

    int target = 10;
   cout << binarySearch(vec , target) << endl;;

    return 0;
}
