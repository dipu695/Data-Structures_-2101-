#include<iostream>
using namespace std;
int main()
{  
    
//-----------------input--------------------------
    int size = 5;
    int marks[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin >> marks[i];
    }


//-----------------output--------------------------
    for(int i = 0 ; i < sizeof(marks)/sizeof(int) ; i++)
    {
        cout << marks[i] << endl;
    }
//-----------------------------------------
    // int sz = sizeof(marks);//it will be in byte.
    // int size = sizeof(marks)/sizeof(int);
    // cout << "Size in byte: " << sz << endl;
    // cout << "Array Index numbers: " << size << endl;





    return 0;
}