#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int x[n],y[n];
    float X=0,Y=0;
    for(int i=0;i<n;i++){cin>>x[i]>>y[i];}
    for(int i=0;i<n;i++){
        if(i<n-1){
            X+=float(x[i]*y[i+1]);
            Y-=float(y[i]*x[i+1]);
        }
        if(i==n-1){
            X+=float(x[i]*y[0]);
            Y-=float(y[i]*x[0]);
        }
    }
    float ans=(X+Y)/2;
    cout<<ans;
    return 0;
}
