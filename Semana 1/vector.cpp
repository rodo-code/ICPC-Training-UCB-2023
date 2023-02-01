#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {7,5,3,2,1,8};
    vector<int> w = {11,12,13};
    v.insert(v.begin()+3,10);
    v.insert(v.begin(),w.begin(),w.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    sort(v.begin(),v.end()); // Ordena de menor a mayor
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    // BUSQUEDA BINARIA
    cout<<"Esta el 8? "<<binary_search(v.begin(),v.end(),8)<<"\n"; // O(log N)
    cout<<"Esta el 100? "<<binary_search(v.begin(),v.end(),100)<<"\n"; // O (log N)
    // LOWER BOUND devuelve un iterador al primer elemento no menor que x (>=)
    int x=9;
    int pos = lower_bound(v.begin(),v.end(),x)-v.begin();
    cout<<"El lower bound de "<<x<<" esta en "<<pos<<"\n";
    if(pos!=v.size() && v[pos]==x) cout<<"El "<<x<<" esta en la posicion "<<pos<<"\n";
    else cout<<x<< " no esta en el vector\n";
    // UPPER BOUND devuelve un iterador al primer elemento mayor que x (>)
    x=11;
    pos = upper_bound(v.begin(),v.end(),x)-v.begin();
    cout<<"El upper bound de "<<x<<" esta en "<<pos<<"\n";
    sort(v.rbegin(),v.rend()); // Ordena de mayor a menor
    // Imprimir con C++ 11
    for(int num: v){
        cout<<num<<" ";
    }
    cout<<"\n";
    return 0;
}