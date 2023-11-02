#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"sakib al  hasan", 75});//0(logn)
    // mp.insert({"tamim iqbal", 8});
    // mp.insert({"taskin", 77});
    // mp.insert({"shamim", 98});
    mp["shakib al hasan"] = 78;
    mp["akib"] = 76;
    mp["karim"] = 58;
    mp["latul"] = 38;
    //     for (auto it = mp.begin(); it != mp.end(); it++)
    //     {
    //         cout << it->first << " " << it->second << " " << endl;//o(logn)
    //     }
    // }
    // cout << mp["shamim"] << endl;
    // map e ase kina cheak krte
    // if (mp.count("shamim"))
    // {
    //     cout << "ase" << endl;
    // }
    // else
    // {
    //     cout << " nai" << endl;
    // }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << " " << endl;
    }
}