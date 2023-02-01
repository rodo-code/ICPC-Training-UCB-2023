#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> p;
    p.push(10);
    p.push(8);
    p.push(20);
    p.pop();
    p.push(1);
    cout<<"El elemento en la cima de la pila es "<<p.top()<<"\n";
    // Recorrido de una cola
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<"\n";
    return 0;
}