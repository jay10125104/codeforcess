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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.size();
        if((a+b)!=n){
            cout<<-1<<endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                a--;
            }
            else if (s[i] == '1')
            {
                b--;
            }
        }
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (((s[i] == '0') && (s[j] == '?')))
            {
                s[j] = '0';
                a--;
            }
            else if ((s[i] == '?' )&& (s[j] == '0'))
            {
                s[i] = '0';
                a--;
            }
            else if ((s[i] == '?') && (s[j] == '1'))
            {
                s[i] = '1';
                b--;
            }
            else if ((s[i] == '1') &&( s[j] == '?'))
            {
                s[j] = '1';
                b--;
            }
            i++;
            j--;
        }

        i = 0;
        j = n - 1;
       

        while (i < j)
        {
            if ((s[i] == '?') && (s[j] == '?'))
            {
                if (a >= 2)
                {
                    // cout<<"hi"<<endl;
                    s[i] = '0';
                    s[j] = '0';
                    a -= 2;
                }
                else if (b >= 2)
                {
                    // cout<<"hiii"<<endl;
                    s[j] = '1';
                    s[i] = '1';
                    b-=2;
                }
            }
            i++;
            j--;
        }
        if (i == j && s[i] == '?')
        {
            if (a)
            {
                s[i] = '0';
                a--;
            }
            else if (b)
            {
                s[i] = '1';
                b--;
            }
        }
        // cout<<s<<" "<<a<<" "<<b<<endl;
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(s!=rev){
            cout<<-1<<endl;
        }
        else if(a==b  && a==0){

        cout << s << endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}