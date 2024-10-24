#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int prefixSum[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        ll sum = 0;
        sum = prefixSum[r] - prefixSum[l-1];
        cout<<sum<<endl;
        
    }
}
int main()
{
    inputOutput();
    solve();
    return 0;
}
