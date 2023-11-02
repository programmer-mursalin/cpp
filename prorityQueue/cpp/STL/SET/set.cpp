#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set e duplicate value thakleo ta remove kre dei
    // set e autonatic decending order sort kre dei
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.count(5))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << s.crbegin();
    }
}