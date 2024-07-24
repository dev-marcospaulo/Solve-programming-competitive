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
#define gc getchar_unlocked
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define repi(i,x) for(auto i : x)
#define repi2(k,v,x) for(auto &[k, v] : x)
#define SORT(x) sort(x.begin(),x.end())
#define INF_INT 0x3f3f3f3f
#define endl '\n'

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


template<typename T> T getint() {
	T val=0;
	char c;
 
	bool neg=false;
	while((c=gc()) && !(c>='0' && c<='9')) {
		neg|=c=='-';
	}
 
	do {
		val=(val*10)+c-'0';
	} while((c=gc()) && (c>='0' && c<='9'));
 
	return val*(neg?-1:1);
}

long long n,m,a=0,x,y,z,resp=0,som=0;





void solve(){
    
   cin >> n >> m;
   vector<long long> ans = {0};
  
  while(n--){
     cin >> x;
    
     if(x < 0){
         ans.push_back(a);
        a = 0;
     }else{
         a+= x;
     }
    
  }
   if(a>0)
     ans.push_back(a);
  
   if((long long)ans.size() -1 <= m){
       for(auto i : ans)
           resp += i;

   }else{
      for(long long i = 1; i <= m; i++)
           som += ans[i];
      resp = som;
      for(long long i = m+1; i < (long long)ans.size(); i++){
          som = som + ans[i] - ans[i-m];
          resp = max(resp,som);
      }
    }
  
  
   

  cout << resp << endl;
}



int main() {    

   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t; t = 1; //cin >> t;
	   while(t--) solve();


    return 0;
}

