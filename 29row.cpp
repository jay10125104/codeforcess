#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main()
{
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag1 = 0;
        int i=0;
        int j=1;
        int p=1;
        if(n==1 && s[0]=='0'){
cout<<"No"<<endl;
p=0;
flag1=1;
        }
        if(n>=2 && s.substr(0,2)=="00"){
            cout<<"No"<<endl;
            p=0;
            flag1=1;
        }
        while(j<n){
            if(s[i]=='1' && s[j]=='1'){
                if(p)
                cout<<"No"<<endl;
                p=0;
                flag1=1;
                break;
            }
            i++;
            j++;
        }
        int count=0;
        int flag2=0;
        for(int i=0;i<n;i++){
if(s[i]=='1' && count>2){
    flag2=1;
    if(p)
    cout<<"No"<<endl;
    p=0;

    break;
}
else if(s[i]=='1' && count<=2){
    count=0;
}
else if(s[i]=='0'){
    count++;
}
        }
        if(flag1==0 && flag2==0  &&  count< 2){
            cout<<"Yes"<<endl;
        }
        else if((flag1==0) && (flag2==0) && p){
            cout<<"No"<<endl;
        }
        

    return 0;
}