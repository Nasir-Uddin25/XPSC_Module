#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it =s.begin();

    // cout << *it << endl;
    // cout << *it++ << endl;
    // cout << *it++ << endl;
    // cout << *it++ << endl;
    // cout << *it++ << endl;
    // cout << *it++ << endl;

    // auto it = s.find(4);
    // if (it != s.end())
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;

    // auto it = s.erase(s.begin(), s.end());
    // cout <<* it <<" ";

    // int x;
    // cin >> x;
    // auto it = s.lower_bound(x);
    // if (it == s.end())
    //     cout << "END" << endl;
    // else
    //     cout << *it << endl;

    // cout << s.count(14) << endl;

    // s.erase(5); //0(logn + k)
    // auto it = s.find(5);    //0(logn)
    // s.erase(it);  // 0(logn)

    // for (auto val : s)
    //     cout << val << " ";
    // cout << endl;

    cout << s.count(5) << endl; //0(logn), 0(logn + k)
    return 0;
}