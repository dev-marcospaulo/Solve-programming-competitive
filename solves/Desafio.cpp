#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define pu push
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define eps 1e-8
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define repi(i,x) for(auto i : x)
#define repi2(k,v,x) for(auto &[k, v] : x)
#define SORT(x) sort(x.begin(),x.end())
#define INF_INT 0x3f3f3f3f
#define endl '\n'

const int MAXN = 2e5+2;

/*
    by: marcos andrade
    date: https://neps.academy/br/exercise/2034
    link: 29/07/2024
*/


ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;  
                
    while (y > 0)
    {
    
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 
bool miillerTest(ll d, ll n)
{
   
    ll a = 2 + (ll)rand() % (n - 4);
 
  
    ll x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return true;

    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
 
    
    return false;
}
 

bool isPrime(ll n, ll k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
 
    ll d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
    for (ll i = 0; i < k; i++)
         if (!miillerTest(d, n))
              return false;
 
    return true;
}
 



    ll n, k = 1000000;

    cin >> n;

    if(isPrime(n, k)){
        cout << "talvez" << endl;
    }else{
        cout << "definitivamente nao primo" << endl;
    }
    

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}