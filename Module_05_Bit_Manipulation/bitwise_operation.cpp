#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;    // n ke k th right shift kori then 1 ar sathe and kori
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    cout << check_kth_bit_on_or_off(n, k);
    return 0;
}