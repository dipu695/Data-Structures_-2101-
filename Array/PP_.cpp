#include<iostream>
using namespace std;
int main()
{
    int nums[] = {1 , 5 , 99 , -25 , - 1 , 6};
    //to find smallest
    int smallest = INT_MAX;//means positive infinite

    for(int i = 0 ; i < sizeof(nums)/sizeof(int) ; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
            cout << "Smallest : " << smallest << endl;
        }
        
    }
        //     Because the code prints the value every time a new smaller number is found.

        //  First, it finds 1 (smaller than INT_MAX) → prints Smallest : 1
        // Later, it finds -25 (smaller than 1) → prints Smallest : -25
    return 0;
}