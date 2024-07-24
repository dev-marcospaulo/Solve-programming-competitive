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
    date: 23/06/2024    
    link: https://neps.academy/br/exercise/1776
*/

vector<int> est;



int find(int i ){
      if(i != est[i])
            est[i] = find(est[i]);
      return est[i];
}


int uni(int i ){
    est[i] = find(i-1);
    if((i-1)== 0) return 0; 
}
void solve(){


    int n,x,m, resp = 0;
    
    
    cin >> n >> m;


    for(int i = 0; i <= n; i++)
        est.push_back(i);

    
    
    
    while (m--){
        cin >> x;
        
        resp++;
        if(find(x)== 0){
            resp--;
            break;
        }
        uni(x);

    }

    for( auto i : est)
        cout << i << " ";

    cout << endl;

    
    cout << resp << endl;
}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}