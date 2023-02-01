#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Universidad";
    // Recorrido Tradicional
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    // Recorrido con iteradores
    for(string::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    // Recorrido con C++ 11
    for(auto letra: s){
        cout<<letra<<" ";
    }
    cout<<"\n";
    // Probamos push_back
    for(int i=0;i<100000000;i++){
        s.push_back('.');
    }
    //cout<<s<<"\n";
    return 0;
}