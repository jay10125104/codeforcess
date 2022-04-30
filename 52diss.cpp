#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
ll op1(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll op2(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll op3(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
bool cmp(pair<int,int>a,pair<int,int>b){
    return (a.first - a.second) < (b.first-b.second);
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a;
    vector<int> b;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(a[i], b[i]));
    }
    sort(v.begin(),v.end(),cmp);
    int count=k;
    int ans=0;
    for(int i=0;i<v.size();i++){
        auto t = v[i];
        if(count!=0){
            ans+=t.first;
            count--;
        }
        else{
            ans+=min(t.first,t.second);
        }
    }
    cout<<ans<<endl;
    return 0;
}