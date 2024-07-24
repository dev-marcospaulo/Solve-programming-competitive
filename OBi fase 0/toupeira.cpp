#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;


const int maxN = 1006;
bool mapa[maxN][maxN];



void solve(){

    int  s,t,x ,y,p,n ,resp = 0;
   

    cin >> s >> t;


    while(t--){
        cin >> x >> y;

        mapa[x][y] = true;
        mapa[y][x] = true;
    
    }

    cin >> p;

    while(p--){
        int ant, atual;
        bool posi = true;
        cin >> n; 
        n--;    



        cin >> ant;

        while(n--){
            cin >> atual;

            if(mapa[ant][atual] == false){
                posi = false;
            }

            ant = atual;
        }

        if(posi) resp++;
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


