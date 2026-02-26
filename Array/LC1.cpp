// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 1:

// Input: nums = [2,2,1]

// Output: 1

#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n;
    cin >> n;
    vector < int > vec(n);
   
    for(int i = 0 ; i < n ; i++)
    {
        cin >> vec[i];
    }
    int ans = 0;
    for(int num : vec)
    {
        ans = ans ^ num;
    }
    cout << ans << endl;
    return 0;
}
