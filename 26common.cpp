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
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       string s  = string(51,'a');
       cout<<s<<endl;
       for(int i=0;i<n;i++){
           int x=a[i];
           char t = s[a[i]];
           if(t=='a'){
               t='b';
           }
           else{
               t = 'a';
           }
           for(int i=x;i<s.size();i++){
s[i]=t;

           }
           cout<<s<<endl;

       }
    }

    return 0;
}