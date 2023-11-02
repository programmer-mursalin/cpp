#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int i = 0;
        int j = 1;
        int flag = 0;
        int z = n - 1;

        while (j <= z)
        {

            if (a[i] + 1 == a[j] || a[i] == a[j])
            {
                i++;
                j++;
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
