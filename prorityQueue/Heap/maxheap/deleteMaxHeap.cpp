#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int x)
{
    v.push_back(x);
    int curridx = v.size() - 1;
    while (curridx != 0)
    {
        int paridx = (curridx - 1) / 2;
        if (v[curridx] > v[paridx])
        {
            swap(v[curridx], v[paridx]);
        }
        else
        {
            break;
        }
        curridx = paridx;
    }
}
void deleteMaxheap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curr = 0;
    while (true)
    {
        int leftidx = curr * 2 + 1;
        int rightidx = curr * 2 + 2;
        int lastidx = v.size() - 1;
        if (leftidx <= lastidx && rightidx <= lastidx)
        {
            if (v[leftidx] >= v[rightidx] && v[leftidx] > v[curr])
            {
                swap(v[leftidx], v[curr]);
                curr = leftidx;
            }
            else if (v[rightidx] >= v[leftidx] && v[rightidx] > v[curr])
            {
                swap(v[rightidx], v[curr]);
                curr = rightidx;
            }
            else
            {
                break;
            }
        }
        else if (leftidx <= lastidx)
        {
            if (v[leftidx] > v[curr])
            {
                swap(v[leftidx], v[curr]);
                curr = leftidx;
            }
            else
            {
                break;
            }
        }
        else if (rightidx <= lastidx)
        {
            if (v[rightidx] > v[curr])
            {
                swap(v[rightidx], v[curr]);
                curr = rightidx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }
    deleteMaxheap(v);
    for (int val : v)
    {
        cout << val << " ";
    }
}