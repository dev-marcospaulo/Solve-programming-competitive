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
    date: 25/07/2024
    link: https://neps.academy/br/exercise/1439
*/


ll lazy[4*MAXN];
ll segtree[4*MAXN];

ll gcd(ll a, ll b) {
    ll R;
    while ((a % b) > 0) {
        R = a % b;
        a = b;
        b = R;
    }
    return b;
}

void updateLazy(int node, int l, int r){
    
    if(lazy[node] == 0) return;

    if(l == r ){
        seg
    }else{

        lazy[2*node]
    }

    


}

ll updetae



void solve(){


    int N,M, x , y;
    ll w;

    cin >> N >> M;

    vector<ll> lista(N+1, 1);
    vector<tuple<int,int,ll>> querys;

    for(int i = 0; i < M; i++){
        cin >>  x >> y >> w;

        querys.push_back(make_tuple(x,y,w));
       
        ll k = gcd(lista[x],lista[y]);

        if(k == w ) continue;
        if(k > w){
            
            cout << "Impossible" << endl;
            return;
        }   

        
        if(! (w%k) ){
            lista[x] *= w/k;
            if(x != y)
                lista[y] *= w/k;
        }else{

            cout << "Impossible" << endl;
            return;
        }
        
    }


    for(int i = 0; i < M; i++){

        if(gcd(lista[get<0>(querys[i])], lista[get<1>(querys[i])] ) != get<2>(querys[i]) ){
            
            cout << "Impossible" << endl;
            return;
        }
     
    }


    for(int i = 1; i <= N; i++)
        cout << lista[i] << ' ';

    
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}