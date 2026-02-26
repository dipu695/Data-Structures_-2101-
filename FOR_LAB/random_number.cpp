#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertaionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int smlIndx = i;
        for (int j = i + 1 ;  j < arr.size() ; j++)
        {
            if(arr[j] < arr[smlIndx]) swap(arr[j] , arr[smlIndx]);
            {
                return j;
            }
        }
    }
}

int main()
{
    /////--------random number--------/////
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);

    ofstream fout("Random_Number.txt");
    /////--------random number--------/////

    /////-------- input random number to file--------/////
    int n = 10; //======================================= > Changable
    cout << "Before sort: ";
    for (int i = 0; i < n; i++)
    {
        int x = dis(gen);
        fout << x << " ";
        cout << x << " ";
    }
    cout << endl;
    fout.close();

    vector<int> arr;
    int y;
    ifstream fin("Random_Number.txt");
    while (fin >> y)
    {
        arr.push_back(y);
    }

    fin.close();
   
    bubbleSort(arr);
    cout << "After sort: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    ofstream radOut("Sorted.txt");
    int sz = arr.size();
    for (int i = 0; i < sz; i++)
    {
        radOut << arr[i] << " ";
    }

    return 0;
}