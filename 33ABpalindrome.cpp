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
        int one;
        int zero;
        cin >> zero >> one;
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one--;
            }
            else if (s[i] == '0')
            {
                zero--;
            }
        }
        int i = 0;
        int j = n - 1;
        int flag=0;
        cout<<s<<" "<<endl;
        while (i <= j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
                continue;
            }
            else if ((s[i] != s[j]) && (s[i] == '0') && (s[j]=='?'))
            {
                s[j] = '0';
                zero--;
            }
            else if ((s[i] != s[j]) && (s[i] == '1') && (s[j]=='?'))
            {
                s[j] = '1';
                one--;
            }
            else if ((s[i] != s[j]) && (s[j] == '0')&& (s[i]=='?'))
            {
                s[i] = '0';
                zero--;


            }
            else if ((s[i] != s[j]) && (s[j] == '1') && (s[i]=='?'))
            {
                s[i] = '1';
                one--;
            }
            else{
                cout<<-1<<endl;
                flag=1;
                break;
            }
            i++;
            j--;
        }
        cout<<one<<" "<<endl;
        cout<<s<<endl;
        if(flag==1){
            continue;
        }
       if(one<0 || zero<0){
           cout<<-1<<endl;
           continue;
       }
       if(n%2){
           int i=0;
           int j=n-1;
           int flag2=0;
           while(i<j){
               if((s[i]==s[j])  && (s[i]=='1' || s[i]=='0')){
                   i++;
                   j--;
                   continue;
               }
                if((s[i]==s[j]) && (s[i]=='?') && (one-2)>=0){
                    s[i]='1';
                    s[j]='1';
                    one-=2;
                }
                else if((s[i]==s[j]) && (s[i]=='?') && (zero-2)>=0){
                    s[i]='0';
                    s[j]='0';
                    zero-=2;
                }
                else{
                    cout<<-1<<endl;
                    flag2=1;
                    break;
                }
                i++;
                j--;
           }
        cout<<one<<" "<<endl;

           if(flag==0){
               if(s[i]=='?' && (one==1 || zero==1)){
                   if(one){
                       s[i]='1';
                   }
                   else{
                       s[i]='0';
                   }
               }
               if(one==0 && zero==0){
                   cout<<s<<endl;
               }
               else{
                   cout<<-1<<endl;
               }
           }
       }
    }

    return 0;
}