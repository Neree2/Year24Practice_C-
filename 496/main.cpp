#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j%2==0){cout<<"*";}
            else{cout<<"_";}}
        cout<<'\n';}
    return 0;}
