#include <bits/stdc++.h>

using namespace std;

vector<int> st; // vector del segment tree
vector<int> v; // vector original

void build(int nodo,int l,int r){
    if(l==r){
        st[nodo] = v[l];
        return;
    }
    int mid = (l+r)/2;
    // Generamos nodo izquierda
    build(nodo*2,l,mid);
    // Generamos nodo derecha
    build(nodo*2+1,mid+1,r);
    // Construimos el nodo
    st[nodo] = st[nodo*2] + st[nodo*2+1];
}

int query(int nodo,int l,int r,int a,int b){
    if(a<=l && r<=b) return st[nodo];
    if(b<l || r<a) return 0; // Elemento Neutro de la operacion
    int mid = (l+r)/2;
    // Respuesta del izquierdo
    int r1 = query(nodo*2,l,mid,a,b);
    // Respueta del derecho
    int r2 = query(nodo*2+1,mid+1,r,a,b);
    // Retornamos la union de ambas respuestas
    return r1 + r2;
}

void update(int nodo, int l, int r, int pos, int val){
    if(l==r and l==pos){
        st[nodo] = val;
        return;
    } 
    if(pos<l || r<pos) return;
    int mid = (l+r)/2;
    // Actualizamos nodo izquierda
    update(nodo*2,l,mid,pos,val);
    // Actualizamos nodo derecha
    update(nodo*2+1,mid+1,r,pos,val);
    // Actualizamos el nodo
    st[nodo] = st[nodo*2] + st[nodo*2+1];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,x;
    cin>>N;
    st.assign(N*4,0);
    for(int i=0;i<N;i++){
        cin>>x;
        v.push_back(x);
    }
    build(1,0,N-1);
    for(auto num: st){
        cout<<num<<" ";
    }
    cout<<"\n";
    cout<<query(1,0,N-1,2,4)<<"\n";
    cout<<query(1,0,N-1,0,3)<<"\n";
    cout<<query(1,0,N-1,4,4)<<"\n";
    update(1,0,N-1,3,6);
    for(auto num: st){
        cout<<num<<" ";
    }
    cout<<"\n";
    return 0;
}