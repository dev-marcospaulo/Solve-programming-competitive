#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;




void solve(){

    int a,b,c,sum=0;


    cin >> a >> b >> c;

    sum = a + 2*b + 3*c;


    if(sum >= 150)
        cout << 'B' << endl;
    else if(sum >= 120)
        cout << 'D' << endl;
    else if(sum >= 100)
        cout << 'P' << endl;
    else
        cout << 'N' << endl;

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}


