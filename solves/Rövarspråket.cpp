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
    link: https://neps.academy/br/exercise/1823
*/


char lista[5] = {'a', 'e', 'i', 'o', 'u'};
char alf[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y' , 'z', 'z','z'};

void solve(){

    string a;
    map<char,bool> mapa1;
    map<char,char> mapa2;

    for(int i = 0; i < 5; i++)
        mapa1[lista[i]] = true;
    
    for(int i = 0; i < 21; i++)
        mapa2[alf[i]] = alf[i+1];
    cin >> a;

    for(auto x : a){
        if(mapa1[x])
            cout << x;
        else{
            pair<char, int> l = {'a', x - 'a'};

            for(int i = 1; i < 5; i++){
                if(abs(x-lista[i]) < l.sc) l = {lista[i], abs(x-lista[i])};
                else break; 
            }

            cout << x << l.fi << mapa2[x];
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