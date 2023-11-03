/*Problem Statement

You will be given a list A of size N. The list will contain data of some students where each student have Name, Roll and Marks. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

0 X -> Insert X into the list where X is the data of a student which contain Name, Roll and Marks. Then print the current student's data who has the maximum Marks from the list.
1 -> Print the current student's data who has the maximum Marks from the list.
2 -> Delete the student who has the maximum Marks from the list and print the current student who has the maximum Marks from the list.
Note: If there are multiple students with same Marks then we will select whose Roll is smaller. If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain N.
Next N lines will contain Name, Roll and Marks of student A[i].
Third line will contain Q.
Next Q lines will contain the commands.
Constraints

1 <= N+Q <= 10^5
1 <= |Name| <= 1000, Name will contain only English lowercase letters and will not contain any spaces.
0 <= Roll <= 10^5
0 <= Marks <= 100
Output Format

For each command, print as asked from the list.
Sample Input 0

3
akib 23 95
jobbar 24 99
ali 25 100
8
1
2
2
2
0 kabir 15 65
0 asif 55 65
2
0 tamim 35 65
Sample Output 0

ali 25 100
jobbar 24 99
akib 23 95
Empty
kabir 15 65
kabir 15 65
asif 55 65
tamim 35 65
Submissions: 529
Max Score: 20
Difficulty: Easy
Rate This Challenge:


More
*/
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll, marks;
    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};
int main()
{
    priority_queue<student, vector<student>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        pq.push(obj);
    }
    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student obj1(name, roll, marks);
            pq.push(obj1);
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
            }
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
}