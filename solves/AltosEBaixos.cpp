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
    date: 15/05/2025
    link: https://neps.academy/br/exercise/810
*/



void solve(){

    int n,resp = 0, k=0;
    string s;

    cin >> n;
    cin >> s;

    vector<int> v(s.size());

   

    for (int i = 0; i < n-1; i++){
        if(s[i] == 'A')
            resp++;
        else   
            resp--;
        v[i] = resp;
        k = min(k, resp);
    }
    cout << -k << ' ';

    for (int i = 0; i < n-1; i++){
        cout << v[i]-k << ' ';
    }

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}