#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define for0(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sz(x) sizeof(x)
ll op1(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a + b) % m) + m) % m;
}
ll op2(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a * b) % m) + m) % m;
}
ll op3(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a - b) % m) + m) % m;
}
int main()
{
  int times;
  cin >> times;
  while (times--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0' && s[i + 1] == '0' &&(i+1)<n)
      {
        ans += 2;
      }
      else if ((s[i] == '0') && (s[i + 2] == '0') && ((i+2)<n))
      {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}