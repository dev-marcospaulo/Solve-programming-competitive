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

const int MAXN = 2e6+2;

/*
    by: marcos andrade
    date: 19/06/2024
    link: https://neps.academy/br/exercise/358
*/

bool segtree[MAXN];
int lazy[MAXN]; 


bool f(bool a, bool  b){
        return (a || b);
}


void updateLazy(int node, int st, int en){
    
    if (lazy[node] != -1){
        
        segtree[node] = lazy[node];
 
       
        if (st != en){
            lazy[node*2 + 1] = lazy[node];
            lazy[node*2 + 2] = lazy[node];
        }
 

        lazy[node] = -1;
    }
    

}

void updateRangeUtil(int node, int st, int en, int target_st, int target_en, int value){
   
    updateLazy(node, st, en);

    if (target_st>en || st>target_en )
        return ;
 
    // Current segment is fully in range
    if (st>=target_st && en<=target_en)
    {
        
        segtree[node] = value;
 
        
        if (st != en)
        {
            
            lazy[node*2 + 1]  = value;
            lazy[node*2 + 2]  = value;
        }
        return;
    }
 

    int mid = (st+en)/2;
    updateRangeUtil(node*2+1, st, mid, target_st, target_en, value);
    updateRangeUtil(node*2+2, mid+1, en, target_st, target_en, value);
 
    segtree[node] = f(segtree[node*2+1],segtree[node*2+2]); 
}


int query(int node, int st, int en, int target_st , int target_en){


    updateLazy(node, st, en);
    


    if (st>target_en || target_st>en)
        return 0;
 
    if (st>=target_st && en<=target_en)
        return segtree[node];
 
    
    int mid = (st + en)/2;

    return f(query(2*node+1,st, mid, target_st, target_en),query(2*node+2,mid+1, en, target_st, target_en));
}
 


void solve(){

    int a,b,x,y, resp = 1;
    
 


    cin >> a >> b;
    
    cin >> x >> y;
    

    for(int i = 0; i < 10*a; i++)
        lazy[i] = -1;

    lazy[0] = 1;

    updateRangeUtil(0,0,a,x,y,0);

    int counter = 1;
    for(int i = 0; i < b-2; i++){
        cin >> x >> y;


        updateRangeUtil(0,0,a,x,y,0);

        
        if(query(0,0,a,0,a) == 1){
            //counter++;
        }else{
           // cout << "NOT PASS: " << x << ' ' << y << endl;
            resp += 2;
            counter = 1;
            lazy[0] = 1;
            updateRangeUtil(0,0,a,x,y,0);
        }
        
        
    }


    cout << resp << endl;


}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}