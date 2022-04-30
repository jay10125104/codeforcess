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
    string s;
    cin >> s;
    string t;
    cin >> t;
    long long int i = 0;
    long long int count = 0;
    long long int j = 0;
    while (i < n)
    {

        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else if (i == n - 1)
        {
            count++;
            break;
        }
        else if ((((s[i] - '0') + (s[i + 1] - '0')) == 1) && ((((t[j] - '0') + (t[j + 1] - '0')) == 1)))
        {
            i += 2;
            j += 2;
            count++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout << count << endl;
    return 0;
}