#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> q;
    q.push(10);
    q.push(8);
    q.push(20);
    q.pop();
    q.push(1);
    cout<<"El elemento al frente de la cola es "<<q.front()<<"\n";
    cout<<"El ultimo elemento de la cola es "<<q.back()<<"\n";
    // Recorrido de una cola
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
    return 0;
}