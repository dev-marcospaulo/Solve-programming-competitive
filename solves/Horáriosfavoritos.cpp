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
vector<int> lista;



bool seqAri(int n){
    int mat[4];
    
    for(int i = 0; i < 4; i++){
        mat[i] = n%10;
        n /= 10;
    }

    if(mat[3])
        return (mat[0] - mat[1] == mat[1] - mat[2]) && (mat[0] - mat[1] == mat[2] - mat[3]); 
    return (mat[0] - mat[1] == mat[1] - mat[2]);    
}

// 00:00 - 1:00


int bb(int l, int r, int target){
    if(l == r){
	if(lista[l] > target)
        	return l-1;
 	return l;
    }
    int mid = (l+r)/2;

    if(lista[mid] == target)
        return mid;
    else if(lista[mid] > target)
        return bb(l, mid -1, target);
    return bb(mid+1, r, target);

}  
void solve(){

    int n;
    
    
 
    cin >> n;
lista.push_back(0);
    
    for(int i = 1; i < 13; i++){
        for(int j = 0; j < 60; j++){
	    
            if(seqAri((i*100+j))){// cout << i*100+j << endl;
                lista.push_back(i*100+j);
		}
	    
        }
    }

    int resp = 0;
    
    resp += (int(n/720))*((int)lista.size()-1);
    n = n%720;
    
    
    //cout << lista.size() << endl;
 
    if(n < 60){
        cout << resp + bb(0, (int)lista.size()-1,1200 + n) -  bb(0, (int)lista.size()-1,1200);
    }else{
        n -= 60;

    
        int h = (int)(n/60)+1, minu = n%60;
	
        cout << resp + 1 + bb(1, (int)lista.size()-1,h*100 + minu) << endl;
    }


   

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}