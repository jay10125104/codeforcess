#include <bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i, n) for (long long int i = 0; i < n; i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main()
{
    long long int times;
    cin >> times;
    while (times--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int add = 0;
        long long int ans = 0;
        for (long long int i = 0; i < n; i++)
        {
           if(v[i]>0){
               add+=v[i];
           }
           else{
               add-=min(add,abs(v[i]));
           }
        }
        cout<<add<<endl;
    }
        return 0;
}