#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v(n); // array of vector declare
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // cin >> v[i];
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); // 0(1)
    // }
    // cout << v.size() << endl;
    // v.pop_back(); // 0(1)
    // v.pop_back(); // 0(1)
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    // cout << endl;

    // cout <<"first element of vector " << v.front() << endl;  //0(1)
    // cout <<"last element of vector " << v.back() << endl;    //0(1)
    // v.clear();      //0(n)
    // if(v.empty() == true)  //0(1)
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    int n;
    cin >> n;
    // vector<int> v(n, 4);
    vector<int> v(n);
    // v.assign(n, 3);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // v.erase(v.begin()+1, v.end());
    // reverse(v.begin(), v.end());

    // auto it = v.begin() +4;
    // auto it = v.end() -1;
    // cout << *it << endl;
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    // for(auto it = v.begin(); it < v.end(); it++)
    //     cout << *it << endl;

    // for (auto it = v.rbegin(); it < v.rend(); it++)
    //     cout << *it << " ";
    // reverse(v.begin(), v.end());     //0(n)

    // sort(v.begin(), v.end());        //0(nlogn)
    // sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end(), greater<int>());
    for (auto val : v)
        cout << val << " ";
    return 0;
}