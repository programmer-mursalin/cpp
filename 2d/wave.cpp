#include <bits/stdc++.h>
using namespace std;
void wavematrix(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    for (int stratcolum = 0; stratcolum < m; stratcolum++)
    {
        if (stratcolum % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i][stratcolum] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << v[j][stratcolum] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {7, 8, 9, 10}};
    wavematrix(v);
}