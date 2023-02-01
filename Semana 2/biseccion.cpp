#include <bits/stdc++.h>

using namespace std;

double f(double x){
    return (x*x*x)-2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double eps = 0.000000001;
    double l=-2,r=2,mid;
    while(r-l>eps && f(l)*f(r)<0){
        mid = (l+r)/2;
        if(f(mid)<0) l = mid;
        if(f(mid)>0) r = mid;
        if(abs(f(mid))<eps) break;
    }
    cout<<mid<<"\n";
    return 0;
}