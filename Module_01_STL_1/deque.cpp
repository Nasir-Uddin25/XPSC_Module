#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        // int x;
        // cin >> x;
        // dq.push_back(x);
        cin >> dq[i];
    }

    dq.push_front(100);
    dq.push_front(200);
    dq.pop_front();

    for (auto val : dq)
        cout << val << " ";
    cout << endl;

    dq.pop_front();

    for (auto val : dq)
        cout << val << " ";
        cout << endl;

    cout << dq.front() <<" " << dq.back() << endl;
    return 0;
}

// vector -> push_back(), pop_back(), back()  -> 0(1)
// deque -> push_front(), pop_front(), front() -> 0(1)