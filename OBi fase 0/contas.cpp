#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;




void solve(){


    int a,b,c,d, resp=0,sum=0;


    cin >>  a >> b >> c  >> d;

    sum = b+c+d;

    if(a >= min(b,min(c,d))){
        sum -= min(b,min(c,d));
        a -= min(b,min(c,d));
        resp++;  
    }

    if(a >= (sum - max(b,max(c,d))) ){
        a -= (sum - max(b,max(c,d)));
        resp++;  
    }


    if(a >= max(b,max(c,d))){
        resp++;  
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


