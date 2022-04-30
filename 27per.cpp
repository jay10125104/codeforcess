#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int times;
    cin>>times;
    while(times--){
        int n;
        cin>>n;
        vector<int>ans(n,0);
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mx = INT_MIN;
        int count=1;
        int flag=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            if(a[i]==count){
                count++;
            }
            if(a[i]>mx){
                mx = a[i];
                ans[i]=a[i];
                m[a[i]]++;
            }
            else if(a[i]==mx && count<mx){
ans[i]=count;
m[count]++;
while(m[count]!=0){
    count++;
}
            }
            else if(a[i]<mx){
                flag = 1;
                cout<<"-1"<<endl;
                break;
            }
            else if(a[i]==mx && count>=mx){
                cout<<-1<<endl;
                flag=1;
                break;
            }

        }
        if(flag==0){
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
     return 0;
}