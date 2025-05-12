#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1; // n ke k th right shift kori then 1 ar sathe and kori
}

void print_on_and_off_bits(int n)
{
    for (int k = 31; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}

int cnt = 0, cnt1 = 0;;
int cnt_on_and_off_bits(int n)
{
    for (int k = 31; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
            cnt++;
       
    }
   

}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n, k;
    // cin >> n >> k;
    // cout << check_kth_bit_on_or_off(n, k);

    int n;
    cin >> n;
    print_on_and_off_bits(n);
    cout << endl;
    //cout << __builtin_popcount(n);

    cout << __lg(n);
    // cout << cnt_on_and_off_bits(n);
    // cout << turn_on_kth_bit(n, k);
    // cout << turn_off_kth_bit(n, k);
    // cout << toggle_kth_bit(n,k);
    return 0;
}