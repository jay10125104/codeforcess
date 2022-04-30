#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)

int ParityStringPalandrome( vector<int>nums){
string par="";
int one=0;
int zero=0;
for(auto i:nums){
if(i%2){
one++;
par+="1";
}
else{
zero++;
par+="0";
}
}
if(zero!=one){
return -1;
}
else{
int i=0;
int j=1;
int count=0;
while(j<par.size()){
if(par[i]==par[j]){
count++;
}
i++;
j++;
}
float ans = (float)count/2;
int sol = ceil(ans);
return sol;

}
}
int main(){

  
        int ans = ParityStringPalandrome({2,3});
        cout<<ans<<endl;
    
     return 0;
}