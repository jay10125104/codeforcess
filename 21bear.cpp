#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>v(a+1);
    for(int i=1;i<=a;i++){
        cin>>v[i];
    }
    int i=b-1;
    int j=b+1;
    int count;
    if(v[b]){
        count=1;
    }
    else{
        count=0;
    }
    while(i>=1 && j<=a){
        if(v[i] && v[j]){
            count+=2;
        }
        i--;
        j++;
    }
    while(i>=1){
        if(v[i]){
            count++;
        }
        i--;
        
    }
    while(j<=a){
        if(v[j]){
count++;

        }
j++;
    }
    cout<<count<<endl;
     return 0;
}