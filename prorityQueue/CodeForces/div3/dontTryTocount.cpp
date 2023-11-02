#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int cnt = 0;
        int flag = 0;
        while (x.length() <= 256)
        {
            if (x.find(s) != string ::npos)
            {
                flag = 1;
                break;
            }
            x.append(x);
            cnt++;
        }
        if (flag == 1)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}