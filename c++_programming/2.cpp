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
    string s,t;
    cin>>s>>t;
    map<char,int>fre_s;
    map<char,int>fre_t;
    for(char c:s){
        fre_s[c]++;
    }
    for(char c:t){
        fre_t[c]++;
    }
    for(auto it:fre_s){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}

int main()
{
    inputOutput();
    solve();
    return 0;
}