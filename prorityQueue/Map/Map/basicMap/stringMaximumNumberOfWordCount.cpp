#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;

        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int MAX = 0;
        string finalString;
        while (ss >> word)
        {

            mp[word]++;
            if (mp[word] > MAX)
            {
                MAX = mp[word];
                finalString = word;
            }
        }
        cout << finalString << " " << MAX << endl;
    }
}