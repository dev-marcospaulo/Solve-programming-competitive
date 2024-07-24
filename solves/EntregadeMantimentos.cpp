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
    date: 17/06/2024
    link: https://neps.academy/br/exercise/2482
*/



void solve(){
    

    int n, p,x,y;
    vector<int> l1,l2;

    cin >> n;

    for(int i = 0; i < n;i++){
        cin >> x >> y;

        l1.push_back(x);
        l2.push_back(y);
    }
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    if(n %2 )
        cout << l1[(n+1)/2] << ' ' << l2[(n+1)/2] << endl;
    else 
        cout << l1[n/2+1] << ' ' << l2[n/2+1] << endl; 

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}