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

const int MAXN = 1e2+2;

/*
    by: marcos andrade
    date: 22/08/2024 
    link: https://neps.academy/br/exercise/2345
*/


int r,c, n, ri, ci, m;
char mat[MAXN][MAXN];
char ret[MAXN][MAXN][MAXN];
vector<pii> lista(MAXN);



void putRet(int x, int y, int ind){
    
    for(int i = x, i2= 0; i < r && i2 < lista[ind].fi; i++, i2++){
        for(int j = y, j2 = 0; j < c && j2 < lista[ind].sc; j++,j2++){
            mat[i][j] = ret[ind][i2][j2];
           // cout << mat[i][j] << '|';
        }
        
    }
    
}
void solve(){

    int a,b,p;

    cin >> r >> c;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> ri >> ci;
        lista[i] = {ri, ci};
        for(int j = 0; j < ri; j++){
            for(int k = 0; k < ci; k++){
                cin >> ret[i][j][k];
            }
        }
    }
    cin >> m;
    
    while(m--){
        cin >>  a >> b >> p;

        putRet(a,b,p-1); 
    }



    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(!mat[i][j])
                cout << '.';
            else  
                cout << mat[i][j];
        }
        cout << endl;
    }
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}