
//finding samllest value from a given array---
#include<iostream>
using namespace std;
int main()
{
    int nums[] = {1 , 5 , 99 , -25 , - 1 , 6};
    //to find smallest
    int smallest = INT_MAX;//means positive infinite

    for(int i = 0 ; i < sizeof(nums)/sizeof(int) ; i++)
    {
        // if(nums[i] < smallest)
        // {
        //     smallest = nums[i];
           
        // }
    //-------or------
        smallest = min(nums[i] , smallest);


        
    }
     cout << "Smallest : " << smallest << endl;
    return 0;
}