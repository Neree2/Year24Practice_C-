#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,cost=0;
    cin>>n;
    while(n>0){
        if(n>=15){
            cost+=3000;
            n-=15;
            if(n>8&&n<15){cost+=3000;n-=15;}}
        if(n>=9&&n<15){cost+=3000;n-=15;}
        if(n<15&&n>=4){cost+=1500;n-=5;}
        if(n<5&&n>=2){cost+=800;n-=2;}
        if(n==1){cost+=500;n-=1;}}
    cout<<cost;
    return 0;}
