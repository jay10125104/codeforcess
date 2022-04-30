#include <bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i, n) for (long long int i = 0; i < n; i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long int mid = 0;
    for (long long int i = 0; i < n; i++)
    {
        mid += a[i];
        sum -= a[i];
        if (mid >= sum)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}