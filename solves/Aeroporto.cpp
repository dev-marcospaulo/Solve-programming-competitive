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
    date: 30/12/2023
    link: https://neps.academy/br/exercise/290
*/

int mat[1005];

void solve(){
    int n, m, maxv = -1, a ,b, c = 1;

    while(1){

        cin >> n >> m;

        if(n == 0 && m == 0) return;

        while(m--){
            cin >> a >> b;
            mat[a]++;
            mat[b]++;
            maxv = max(maxv, max(mat[a], mat[b]));

            
        }   

        cout << "Teste " << c << endl;
        repn(i, n){
            if(mat[i] == maxv)
                cout << i << ' ';
            mat[i] = 0;
        }
        c++;
        maxv= -1;
        cout << endl << endl;

    }

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}