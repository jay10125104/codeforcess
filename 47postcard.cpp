#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int st = 0;
    int q = 0;
    int idx = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            q++;
        }
        else if (s[i] == '*')
        {
            st++;
            idx = i;
        }
    }
    if (st > 0)
    {
        if ((s.size() - (2 * (q +st))) > k)
        {
            // cout<<(s.size() - (2 * q) - st)<<endl;
            cout << "Impossible" << endl;
        }
        else
        {
            int t = k - (s.size() - (2 * (q + st)));
            
            int flag=1;
            string ans = "";
            for (int i = 0; i < s.size(); i++)
            {
                if ((s[i + 1] != '?') && (s[i] != '?') &&( s[i+1] !='*') && (s[i]!='*'))
                {
                    ans += s[i];
                    
                }
                else if ((s[i] == '*') && flag)
                {
                    while (t--)
                    {
                        ans += s[i - 1];
                    }
                    flag=0;
                }
               
            }

            cout << ans << endl;
        }
    }
    else{
        string ans="";
       if (((s.size() - (2 * q) - st) <= k) && (s.size()-q)>=k)
        {
            int rem = s.size() - q -k;
            for(int i=0;i<s.size();i++){
                if(s[i+1]!='?' && s[i]!='?'){
                    ans+=s[i];
                }
                else if(rem){
i++;
rem--;
                }
                else if(s[i]!='?'){
                    ans+=s[i];
                }
            }
            cout<<ans<<endl;
        }
        else{
            cout << "Impossible" << endl;

        }
    }
    return 0;
}