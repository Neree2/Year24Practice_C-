#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,a=0,b=0,g=0;
    string s,A="ABC",B="BABC",G="CCAABB";
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]==A[i%3]){a++;}
        if(s[i]==B[i%4]){b++;}
        if(s[i]==G[i%6]){g++;}}
    int ma=max({a,b,g});
    cout<<ma;
    if(ma==a){cout<<'\n'<<"Adrian";}
    if(ma==b){cout<<'\n'<<"Bruno";}
    if(ma==g){cout<<'\n'<<"Goran";}
    return 0;
}
