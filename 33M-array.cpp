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
        long long int x;
        cin >> x;
            vector<long long int> v(x, 0);
            for (long long int i = 0; i < n; i++)
            {
                long long int t;
                cin >> t;
                v[(t % x)]++;
            }

            long long int ans = 0;
            if (v[0])
            {
                ans = 1;
            }
            else
            {
                ans = 0;
            }
            if ((x % 2 )== 0 && (v[x / 2]))
            {
                ans++;
            }

            long long int i = 1;
            long long int j = x - 1;
            while (i < j)
            {
                if(v[i]==0 || v[j]==0){
                    ans+=max(v[i],v[j]);
                }
                else{
ans++;
int toadd = max(v[i],v[j]) - min (v[i],v[j] ) -1;
if(toadd > 0){
    ans+=toadd;
} 
                }
                i++;
                j--;

            }
            cout << ans << endl;
    }
    return 0;
}