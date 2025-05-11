#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans;
    queue<int> q;

    int l = 0, r = 0;

    while (r < n)
    {
        if (a[r] < 0)
        {
            q.push(a[r]);
        }
        if (r - l + 1 == k) // window heat
        {
            if (!q.empty())
            {
                ans.push_back(q.front()); // decision making
                if (a[l] == q.front())
                    q.pop(); // contribution remove
            }
            else
            {
                ans.push_back(0);
            }
            l++;
            r++;
        }
        else
            r++;
    }

    for (auto val : ans)
        cout << val << " ";
    return 0;
}