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
    date: 12/06/2024
    link: https://neps.academy/br/exercise/1312
*/

ll n, defN = 998877665544332211, resp = 0, atual = 0, j;
vector<ll> nums(18);

bool validNumber(ll k){ //complexity O(log(k))

    vector<int> numbs(10, 0);

    while(k>0){
        numbs[k%10]++;
        if(numbs[k%10]>2) return false;
        k /= 10;
    }
    
    return true;
}



ll extract(ll n, ll k){
    string n_str = to_string(n);

    for(ll i = 1; i <= ((ll)n_str.length() - k); i++){
        n /= 10;
    }

    return n;
}

void solve(){

    
    

    cin >> n;
    j = n;
    int counter = 0;
    while(j > 0){
        nums[counter] = j%10;
       
        j /= 10;
        counter++;
    }
  
    if(counter <= 2 or validNumber(n)){
        cout << n;
        return;
    }

    
    resp = extract(defN, (counter-1)) ;
    int maxNu, adds = 0;
    ll save;
    bool pass = false;
    
    atual = n;
    for(int i = 0; i < counter ; i++){
        
        
        maxNu = atual %10;
        
        atual /= 10;
        save = atual;
        
        if(nums[i] == 0 || !validNumber(atual) ) continue;

       
       // cout << atual << endl;
        adds = 0;
     
        for(int j = 0; (j < counter-i+1 ); j++ ){
            pass = false;
            for(int k = 9; k >= 0; k--){
                if(j == 0  && k >= maxNu) continue;
                if(!validNumber(atual*10+k)) continue;
                pass = true;
                adds++;
                atual = atual*10+k;
                break;
            }
            if(pass == false) break;
        }
      
      //  cout << counter << endl;
      //   cout << atual << counter  << endl;
        if(adds == (i+1) && validNumber(atual)){
            cout << atual;  
            return;
        }

        atual = save;


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