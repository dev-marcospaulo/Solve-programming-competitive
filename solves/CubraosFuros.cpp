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
    date: 05/01/2023   
    link: https://neps.academy/br/exercise/630
*/


int mat[MAXN][2];

void solve(){

    int n, resp,counter=0;

    while(1){
        counter++;
        resp = INF_INT;
        cin >> n;

        if(!n) return;

        rep(i, n)
            cin >> mat[i][0] >> mat[i][1];

        vector<int>md(n, 0);
        
        rep(i,n){
            for(int j = i+1; j < n; j++){
                int x = mat[i][0] - mat[j][0];
                int y = mat[i][1] - mat[j][1];
                int dist = x*x + y*y;

                md[i] = max(md[i], dist);
                md[j] = max(md[j], dist);
            }
        }

    	rep(i, n)
            resp = min(resp, md[i]);
        cout << "Teste " << counter << endl;
        cout << static_cast<int>(2*sqrt(resp))+5 << endl << endl;
    }
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}