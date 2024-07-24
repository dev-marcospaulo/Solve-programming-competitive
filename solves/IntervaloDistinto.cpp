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
    date:
    link: 
*/


void solve(){

    int  n, ls = 0, x, resp = 0;
    map<int,int> mapa;

    cin >> n;

    vector<int> lista(n);

    for(int i = 0; i < n; i++){
        cin >> x;
        lista[i] = x;

        if(mapa.count(x) && mapa[x] >= ls){
            ls = mapa[x] + 1;
    	}
   
        mapa[x] = i;
        resp = max(resp, i - ls + 1);
    }

    cout << resp;

    
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}