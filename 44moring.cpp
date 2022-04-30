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
        long long int m, n;
        cin >> m >> n;
        vector<vector<long long int>> v(m, vector<long long int>(n, 0));
        for (long long int i = 0; i < m; i++)
        {
            for (long long int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        long long int flag = 1;

        for (long long int i = 0; i < m; i++)
        {
            if (i % 2==0)
            {
                sort(v[i].begin(), v[i].end());
            }
            else
            {
                sort(v[i].begin(), v[i].end(), greater<long long int>());
            }
        }
        for(long long int i=0;i<m;i++){
            for(long long int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}