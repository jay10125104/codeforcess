#include<bits/stdc++.h>
using namespace std;
#define ll long long long long int
#define for0(i,n) for(long long int i=0;i<n;i++)
#define vi vector<long long int>
#define pb push_back
#define sz(x) sizeof(x)
int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];


    }
    long long int mx = INT64_MAX;
    // cout<<mx;
    for(long long int i=0;i<n;i++)
    {
        long long int last = 0;
        long long int count=0;
        for(long long int j=i-1;j>=0;j--){
            long long int mid = last/a[j] + 1; 
            count+=mid;
            last = mid*a[j];

        }
        last = 0;
        for(long long int j = i+1;j<n;j++){
            long long int mid=last/a[j] + 1;
            count+=mid;
            last = mid*a[j];

        }
        // cout<<mx<<" "<<count<<" ";
        mx = min(mx,count);
    }
    cout<<mx<<endl;
     return 0;
}