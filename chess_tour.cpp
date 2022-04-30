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
        int a;
        cin >> a;
        string s;
        cin >> s;
        int one = 0;
        int two = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        if (two == 1 ||two==2)
        {
            cout << "NO" << endl;
            continue;
        }
        char ans[a][a];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i == j)
                {
                    ans[i][i] = 'X';
                }
                else
                {
                    ans[i][j] = '.';
                }
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                for (int j = 0; j < a; j++)
                {
                    for (int k = 0; k < a; k++)
                    {
                        if ((j == i || k == i) && (j != k))
                        {
                            ans[j][k] = '=';
                        }
                    }
                }
            }
        }
        for (int i = 0; i < a; i++)
        {
            if (s[i] == '2')
            {
                for (int j = 0; j < a; j++)
                {
                    if (ans[i][j] == '.')
                    {
                        ans[i][j] = '+';
                        ans[j][i] = '-';
                        break;
                    }
                }
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(ans[i][j]=='.'){
                    ans[i][j]='=';
                    ans[j][i]='=';
                }
            }
        }
        cout<<"YES"<<endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}