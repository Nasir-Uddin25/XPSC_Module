#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // 0(logn)
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // it++;
    // it--;
    // cout << *it;

    // for(auto it = s.begin(); it != s.end(); it++)
    //     cout << *it <<" ";

    // for(auto val : s)
    //     cout << val <<" ";

    // int y;
    // cin >> y;
    // auto it = s.find(y);    //0(logn)
    // if(it != s.end())   //0(1)
    //     cout << "Found";
    // else
    //     cout << "Not Found";

    // auto it = s.begin();
    // it++;
    // s.erase(it);

    // auto it = s.find(4);
    // s.erase(it , s.end());

    // cout << s.count(12) << endl;

    for (auto val : s)
        cout << val << " ";
        cout << endl;

    int y;
    cin >> y;

    auto it = s.upper_bound(y); //0(logn)

    if(it == s.end())
        cout << "END" << endl;
    else
        cout << *it << endl;
    return 0;
 
}

// 4 2 3 2 1 4 5
// 1 2 3 4 5