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



/*
    by: marcos andrade
    date: 4/09/2024
    link: https://neps.academy/br/exercise/1686
*/


template<class T>
void o(const T &a,bool space=false){
	cout << a << (space?' ':'\n');
}

template<class T>
void equals(T &a, T &b){
	if(is_floating_point<T>::value){
	    return fabs(a - b) < eps;
	}
	    return a == b;
}

vector<int> lista;

int n,m,resp=0,x=0,y=0,c;
unordered_map<string,int> mapa;
string a,s,k;





void solve(){
    
    
    cin >> n;
    
    while(n--){
        cin >> a;
        mapa[a]=1;
    }
    cin >> m;
    
    while(m--){
        cin >> a >> c;
        

        for(int i = 0; i < c; i++){
            cin >> k;
            x+= mapa[k];
            cout << ' ' << mapa[k];
        }
    
        mapa[a] = x;
        cout << endl;
        if( x > c/2)
            cout << "porcao tipica " << a << endl;
        else
            cout << "porcao comum " << a << endl;
        cout << endl;
        x = y = 0;
    }
  
  
}



int main() {    

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t; t = 1; //cin >> t;
	   while(t--) solve();


    return 0;
}

