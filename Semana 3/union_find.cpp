#include <bits/stdc++.h>

using namespace std;

vector<int> rep,rnk,tam;
int cant_conj;

void init(int N){
    cant_conj = N;
    rep.assign(N,0);
    rnk.assign(N,0);
    tam.assign(N,1);
    for(int i=0;i<N;i++){
        rep[i]=i;
    }
}

int buscar(int x){
    if(rep[x]==x) return x;
    return rep[x]=buscar(rep[x]);
}

void unir(int x,int y){
    x = buscar(x);
    y = buscar(y);
    if(x!=y){
        cant_conj--;
        if(rnk[x]>=rnk[y]){ // Unimos y con x
            rep[y]=x;
            tam[x]+=tam[y];
            if(rnk[x]==rnk[y]){
                rnk[x]++;
            }
        }
        else{ // Unimos x con y
            rep[x]=y;
            tam[y]+=tam[x];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N=10;
    init(N);
    unir(0,3);
    unir(4,2);
    unir(2,7);
    unir(1,9);
    unir(3,9);
    unir(9,0);
    for(auto x: rep){
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<"Hay "<<cant_conj<<" conjuntos disjuntos\n";
    // Para saber los representas de los conjuntos disjuntos
    for(int i=0;i<N;i++){
        if(rep[i]==i){
            cout<<"El conjunto "<<i<<" tiene "<<tam[i]<<" elementos\n";
        }
    }
    return 0;
}