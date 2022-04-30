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
        int n;
        cin >> n;
        int a[n];
        int flag1 = 0;
        int flag2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                flag1 = 1;
            }
            if (a[i] == 1)
            {
                flag2 = 1;
            }
        }
        if (flag1 && flag2)
        {
            cout << "NO" << endl;
        }
        else if(!flag2){
            cout<<"YES"<<endl;
        }
        else{
        sort(a, a + n);
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if ((a[i - 1] + 1) == a[i])
            {
                flag = 1;
                break;
            }
        }
            if (flag)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}