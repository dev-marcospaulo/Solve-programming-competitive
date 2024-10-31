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


int l,c;
vector<vector<int>> ma, values;
vector<vector<pii>> asso;

int posx[] = {1, 0, 0, -1};
int posy[] = {0, 1, -1, 0};



int find(int v) {
  if(pai[v] == v) return v;
  return find(pai[v]);
}
void une(int a, int b) {
  a = find(a);
  b = find(b);
  
  if(a == b) return;
  
  if(componente[a].size() > componente[b].size()) swap(a, b);
  
  for(int i = 0; i < componente[a].size(); i++) {
    componente[b].push_back(componente[a][i]);
  }
  pai[a] = b;
  soma[b] += soma[a];
  componente[a].clear();
}

bool valid(int x, int y){
    return !(0 > x || 0 > y || x >= l || y >= c);    
}


void solution(int node ){
}

void solve(){



    cin >> l >> c;
    priority_queue<pair<int, pii >> pri;
    ma.resize(l, vector<int>(c));
    asso.resize(l, vector<pii>(c));
    values.resize(l, vector<int>(c));
    
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> ma[i][j];
            asso[i][j] = {-1,-1};
            values[i][j] = -1;
        }
    }


}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}