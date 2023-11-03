/*Problem Statement

You will be given a list A of size N. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

0 X -> Insert X into the list. Then print the current minimum value from the list.
1 -> Print the minimum value from the list.
2 -> Delete the minimum value from the list and print the current minimum value from the list.
Note: If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain N.
Second line will contain the list A of size N.
Third line will contain Q.
Next Q lines will contain the commands.
Constraints

1 <= N+Q <= 10^5
-10^9 <= A[i] <= 10^9 ; Here A[i] means the values of the list A.
-10^9 <= X <= 10^9
Output Format

For each command, print as asked from the list.
Sample Input 0

4
10 -10 -5 -20
10
1
2
2
2
2
0 10
1
2
0 20
1
Sample Output 0

-20
-10
-5
10
Empty
10
10
Empty
20
20
Sample Input 1

6
45 -30 83 -99 19 75
9
1
2
2
0 32
0 6
2
2
0 -86
1
Sample Output 1

-99
-30
19
19
6
19
32
-86
-86
Submissions: 547
Max Score: 20
Difficulty: Easy
Rate This Challenge:


More
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int value;
            cin >> value;
            s.insert(value);
            auto miniterator = s.begin();
            int minvalue = *miniterator;
            cout << minvalue << endl;
        }
        else if (x == 1)
        {
            if (!s.empty())
            {
                auto miniterator = s.begin();
                int minvalue = *miniterator;
                cout << minvalue << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!s.empty())
            {
                auto miniterator = s.begin();
                s.erase(miniterator);
            }
            if (!s.empty())
            {

                auto miniterator = s.begin();
                int minvalue = *miniterator;
                cout << minvalue << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
}