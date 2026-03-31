#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream outFile("input.txt");

    cout << "Write your text :";
    string line;
    bool LE = false;

    while (true)
    {
        getline(cin, line);

        if (line.empty())
        {
            if (LE)
            {
                break;
            }
            LE = true;
        }
        else
        {
            LE = false;
        }

        outFile << line << endl;
    }
    outFile.close();

    ifstream inFile("input.txt");

    if (!inFile.is_open())
    {
        cout << "Error!" << endl;
        return 0;
    }

    vector<string> word;
    string s;
    while (inFile >> s)
    {
        word.push_back(s);
    }

    inFile.close();

    string wrd1, wrd2;

    cout << "Target Word: ";
    cin >> wrd1;
    cout << "Replaced word: ";
    cin >> wrd2;

    for (string &x : word)
    {
        if (x == wrd1)
        {
            x = wrd2;
        }
    }

    ofstream outFile2("output.txt");
    for (auto &x : word)
    {
        outFile2 << x << " ";
    }
    outFile2.close();

    cout << "Done!" << endl;

    return 0;
}