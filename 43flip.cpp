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
        string s,t;
        cin>>s>>t;
        int i=0;
        int count=0;
        int mid=0;
        while(i<s.size()){
            if(s[i]!=t[i]){
                char x = s[i];

                count=1;
                s[i] = t[i];
                i++;
                while(count!=0 && (i<n)){
                    if(s[i]==x){
                        count++;
                        if(x=='1'){
                            s[i]='0';
                        }
                        else {
                            s[i] = '1';
                        }


                    }
                    else{
                        count--;
                       s[i]=x;
                    }
                    i++;
                }
                mid++;
            }
            else{
                i++;
            }
        }
        // cout<<mid;
        if(s==t){
            cout<<"YES"<<endl;
        }
        if((s[0]==t[0] && ((mid%2) !=0)) || (s[0]!=t[0] && ((mid%2)!=0))){
            cout<<"NO"<<endl;
        }
        else if(count){
cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      

       
    }
     return 0;
}