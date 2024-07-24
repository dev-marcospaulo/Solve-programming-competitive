#include <bits/stdc++.h>
using namespace std;

long long vetor[100010] = {0};
long long lazy[800040] = {0};
long long tree[800040] = {0};

void atualizar(long long  i, long long  j, long long  l, long long  r, long long  no, long long  valor){
    if(lazy[no]){
        tree[no] = lazy[no]*(r-l+1);

        if(l != r && l <= r){
            lazy[no*2] = lazy[no];
            lazy[no*2+1] = lazy[no];
        }
        lazy[no] = 0;
    }

    if(l > j || r < i || l > r)
        return;

    if(l >= i && r <= j){
        tree[no] = valor*(r-l+1);

        if(l != r){
            lazy[2*no] = valor;
            lazy[2*no+1] = valor;
        }
    }
    else{
        long long  meio = (l+r)/2;
        atualizar(i, j, l, meio, 2*no, valor);
        atualizar(i, j, meio+1, r, 2*no+1, valor);
        tree[no] = tree[2*no]+tree[2*no+1];
    }
}


long long  search(long long  i, long long  j, long long  l, long long  r, long long  no){
    if(lazy[no]){
        tree[no] = lazy[no]*(r-l+1);
        
        if(l != r && l <= r){
            lazy[2*no] = lazy[no];
            lazy[2*no+1] = lazy[no];
        }

        lazy[no] = 0;
    }

    if(l > r || r < i|| l > j)
        return 0;
    
    if(l >= i && r <= j){
        return(tree[no]);
    }
    else{
        long long  meio = (l + r)/2;
        long long a = search(i, j, l, meio, 2*no);
        long long b = search(i, j, meio+1, r, 2*no+1);

        return(a+b);
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long  n, q;
    cin>>n>>q;

    for(long long  i = 1; i <= n; i++){
        cin>>vetor[i];
        atualizar(i, i, 1, n, 1, vetor[i]);
    }

    for(long long  i =0 ; i < q; i++){
        long long  m;
        cin>>m;

        if(m == 1){
            long long  a, b, k;
            cin>>a>>b>>k;

            atualizar(a, b, 1, n,1, k);
        }else{
            long long  a, b;
            cin>>a>>b;

            cout<<search(a, b, 1, n, 1)<<"\n";
        }
    }
    
}