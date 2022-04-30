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
        if (n % 2 == 0 && n % 4 == 0)
        {

            cout << "YES" << endl;
            long long int one = n / 2;
            long long int i = 2;
            while (one--)
            {
                cout << i << " ";
                i += 2;
            }
            one = n / 2;
            i = 1;
            long long int k = n/2 +1;
            while (one)
            {
                if (i != k)
                {
                    cout << i << " ";
                    one--;
                }
                    i+=2;
            }
            cout<<endl;
        }
            else
            {
                cout << "NO" << endl;
            }
    }
        return 0;
}