#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,t=1;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp=1;
        for(int k=0;k<=t;k++){
            for(int j=n-k;j>0;j--){cout<<" ";}
            for(int j=0;j<temp;j++){cout<<"*";}
            temp+=2;
            cout<<'\n';}
        t++;}
    for(int i=0;i<n;i++){cout<<" ";}
    cout<<"|"<<'\n';
    for(int i=0;i<n;i++){cout<<"=";}
    cout<<"v";
    for(int i=0;i<n;i++){cout<<"=";}
    return 0;
}
