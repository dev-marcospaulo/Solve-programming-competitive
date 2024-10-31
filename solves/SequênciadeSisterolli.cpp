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
    date: 21/08/2024
    link: https://neps.academy/br/exercise/790
*/


ll findPosition(ll l, ll r, ll target){
    ll pos = (l+r)/2;
    
    
    ll k = (ll((pos+1)/2)-1)*50 + ((pos+1)%2)*5 - (ll(pos/2)-1);
    
    
    if(l == r){
        if(k > target)
            return r-1;
        return r;
    }
        

    if(k == target)
        return pos;
    else if(k < target)
        return findPosition(pos+1 , r , target);
    return findPosition(l , pos-1, target);
    cout << k << endl;
}


void solve(){
    ll n, resp = 1e16;

    cin >> n; 

    

    if(n <= 4){
        cout << 1 << endl;
        return;
    }else if(n <= 49){
        cout << 2 << endl;
        return;
    }else if(n <= 53){
        cout << 3 << endl;
        return;
    }

    cout << findPosition(1, resp, n) << endl;

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}