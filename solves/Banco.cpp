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
    date: 31/12/2023
    link: https://neps.academy/br/exercise/273
*/



void solve(){

    multiset<pii> gr, bg;

    int n, at, resp = 0, a, b, atual= 1;

    cin >> at >> n;  

    rep(i, n){  
        cin >> a >> b;

        bg.insert({a,b});
    }

    auto f =  *(bg.begin());   
    gr.insert({f.fi+f.sc, f.sc});
    bg.erase(bg.begin());

    repi(k,bg){
        if(atual < at){
            gr.insert({k.fi+k.sc, k.sc});
            atual++;
        }else{
            auto l =  *(bg.begin()); 
            if( (l.sc - (k.fi - (l.fi - l.sc))) >= 20 ) resp++;
            gr.erase(gr.begin());
            gr.insert({k.fi+k.sc, k.sc});
        }
    }

    cout << resp << endl;
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}