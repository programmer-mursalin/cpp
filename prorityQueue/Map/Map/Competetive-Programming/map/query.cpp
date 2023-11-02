/*You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

 :Add the marks  to the student whose name is .

: Erase the marks of the students whose name is .

: Print the marks of the students whose name is . (If  didn't get any marks print .)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.

Constraints





Output Format

For queries of type  print the marks of the given student.

Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0
//
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int a;
        string b;
        cin >> a >> b;
        if (a == 1)
        {
            int marks;
            cin >> marks;
            if (mp.count(b))
            {
                mp[b] += marks;
            }
            else
            {
                mp[b] = marks;
            }
        }
        else if (a == 2)
        {
            mp.erase(b);
            // mp[b]=0;
        }
        else
        {
            cout << mp[b] << endl;
        }
    }
}