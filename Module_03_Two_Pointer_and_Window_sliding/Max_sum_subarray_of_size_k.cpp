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

    int l = 0, r = 0, sum = 0, ans = 0;

    while (r < n)
    {
        sum += a[r];

        if (r - l + 1 == k) // window heat
        {
            ans = max(ans, sum); // decision making
            sum -= a[l];    //contribution remove
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    cout << ans << endl;
    return 0;
}