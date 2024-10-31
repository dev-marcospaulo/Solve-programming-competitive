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
    date: 10/31/2024
    link: https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/?submissionId=1436931218
*/



void solve(){
    int n, resp, x, atualM, atualS,resp ;
    
    cin >> n;

    cin >> atualM;

    atualS = atualM;
    resp = atualM;

    for(int i = 0; i < n-1; i++){
        cin >> x;

        atualM = max(x, atualM+x);
        atualS = min(x, atualS+x);

        resp = max(resp, max(atualM, abs(atualS)));
        
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


/*
solution in leetcode

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int resp = 0, atualM=-1e6, atualS=1e6;

        for(int i = 0; i < (int)nums.size();i++){
            atualM = max(nums[i], atualM+nums[i]);
            atualS = min(nums[i], atualS+nums[i]); 
            resp = max(resp, max(atualM, abs(atualS)));        
        } 
        
        return resp;
    }
};

*/