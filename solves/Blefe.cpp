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

const int MAXN = 1e4+2;

/*
    by: ma/rcos andrade
    date: 18/02/2024
    link: https://neps.academy/br/exercise/394
*/



void solve(){

    int n, m, x;
    map<int ,bool> mapa;
    vector<int> lista(MAXN);

    cin >> n >> m;

    while(n--){
        cin >> x;
        mapa[x] = 1;
    }

    for(int i = 0; i < m; i++){

        cin >> x;

        if(!mapa[x] ){
            cout << x << endl;
            return;
        }
        mapa[x] = 1;
	    mapa[2*x] = 1;
        for(int j = 0; j < j; j++)
            mapa[lista[j]+x] = 1;
        lista[i] = x;
    }
  
    // O(M^2)

    cout << "sim" << endl;



}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}