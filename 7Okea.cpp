#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout<<"YES"<<endl;
            for (int i = 1; i <= n * k; i++)
            {
                cout << i << endl;
            }
        }
        else
        {
            if (n % 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                int row = n;
                int count = 0;
                for (int i = 1; i <= n * k; i += 2)
                {
                    cout << i << " ";
                    count++;
                    if (count % k == 0)
                    {
                        cout << endl;
                    }
                }
                count = 0;
                for (int i = 2; i <= n * k; i += 2)
                {
                    cout << i << " ";
                    count++;
                    if (count % k == 0)
                    {
                        cout << endl;
                    }
                }
            }
        }
    }
}
