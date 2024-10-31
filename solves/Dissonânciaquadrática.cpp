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
    date: 22/08/24
    link: https://neps.academy/br/exercise/2346
*/


float detyv(float a, float b){
    return -(a*a - 4*b)/4;
}

void solve(){
    float a,b,c,d;

    cin >> a >> b >> c >> d;

    if(detyv(a,b)  > detyv(c,d) ){
        float xv = -a/2;
        float yv = detyv(a,b);
        float posxv = xv*xv + c*xv + d;
        /*
        x^2 + ax + b = x^2 + cx + d
        ax + b =  cx + d
        ax - cx  =  d - b
        x(a - c) = d-b
        x = (d-b)/(a-c)
        */
        if(posxv > yv){
            float intersec =  (d-b)/(a-c);
            cout << intersec+0 << ' ' << (intersec*intersec + a*intersec + b)+0 << endl;
        }else{
            cout << xv+0 << ' ' <<  yv+0; 
        }



    }else{
        float xv = -c/2;
        float yv = detyv(c,d);
        float posxv = xv*xv + a*xv + b;
      
        if(posxv > yv){
            float intersec =  (d-b)/(a-c);
            cout << intersec+0 << ' ' << (intersec*intersec + a*intersec + b) + 0 << endl;
        }else{
            cout << xv+0 << ' ' <<  yv+0; 
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