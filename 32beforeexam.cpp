#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int day;
    cin>>day;
    int time;
    cin>>time;
    int a[day][2];
    int mx=0;
    int mn=0;
    for(int i=0;i<day;i++){
        cin>>a[i][0]>>a[i][1];
        mx+=a[i][1];
        mn+=a[i][0];
    }
    if(mn<=time && mx>=time){
        cout<<"YES"<<endl;
        int rem = time-mn;
        for(int i=0;i<day;i++){
            int toadd=min(rem,a[i][1]-a[i][0]);
            rem-=toadd;
           cout<<a[i][0]+toadd<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
    }
     return 0;
}