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
    date: 29/12/2023
    link: https://neps.academy/br/exercise/211
*/

ll mat[MAXN],mat2[MAXN],  presum[MAXN];

void solve(){

    ll n, l, h, resp= -(0x3f3f3f3f3f3f3f3f), x;
    map<ll, pll> mapa;
    vector<pair<ll, pll> > lista; 
    cin >>  n >> l >> h;

    for(ll i = 0; i < n; i++){
        cin >> x;

        mat[i] = x;
        presum[i+1] = presum[i] + x;
    }

    ll atu = -1, sumatu = 0,  summax = resp , kadatual = resp;
    for(ll i = 0; i < n; i++){
        cin >> x;
        mat2[i] = x;
        if(x){
            sumatu = 0;
            atu = i;
            mapa[i] = {0,0};
            kadatual =-1001;
        }else if(atu != -1){
            sumatu += mat[i];

            
            mapa[atu].sc = max(mapa[atu].sc, sumatu);
        }
        if(!x){
            kadatual = max(kadatual+mat[i], mat[i]);
            summax = max(kadatual, summax);
        }
    }

    atu = -1;
    sumatu = 0;
    for(ll i = n-1; i >= 0; i--){
        x = mat2[i];
        
        if(x){
            sumatu = 0;
            atu = i;
        }else if(atu != -1){
            sumatu += mat[i];
            mapa[atu].fi = max(mapa[atu].fi, sumatu);
        }
    }

    repi2(i,j, mapa){
        lista.push_back({i, {j.fi, j.sc} });
      //  cout << i << ' ' << j.fi << ' ' << j.sc << endl; 
    }


    for(ll i = l; i <= h; i++){
        if(i == 0 ) continue;
        if(i > (ll)(lista.size())) break;

        for(ll j = 0; j+i <= (ll)(lista.size()); j++){
            resp = max(resp, ( lista[j].sc.fi   + lista[j+i-1].sc.sc + presum[lista[j+i-1].fi+1] - presum[lista[j].fi])  );
          //  cout << j << ' ' << i << ' ' << lista[j+i-1].fi << ' ' <<  ( lista[j].sc.fi   + lista[j+i-1].sc.sc + presum[lista[j+i-1].fi+1] - presum[lista[j].fi])  << endl;
        }

    }

    
    if(l  == 0){
        for(auto i : lista){
            resp = max(max(resp, i.sc.fi), i.sc.sc);
        }
        resp = max(resp, summax);
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