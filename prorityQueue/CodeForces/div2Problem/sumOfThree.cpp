#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int i = n - 3;
        int j = 1;
        int k = 2;
        int flag = 0;
        while (i >= 1)
        {
            if (i % 3 != 0 && k % 3 != 0 && i != j && j != k && i != k)
            {
                cout << "YES" << endl;
                cout << i << " " << j << " " << k << endl;
                flag = 1;
                break;
            }

            i--;
            k++;
        }
        if (flag != 1)
        {
            cout << "NO" << endl;
        }
    }
}