#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int currIndex = v.size() - 1;
        while (currIndex != 0)
        {
            int parrentIndex = (currIndex - 1) / 2;
            if (v[parrentIndex] > v[currIndex])
            {
                swap(v[parrentIndex], v[currIndex]);
            }
            else
            {
                break;
            }
            currIndex = parrentIndex;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
}