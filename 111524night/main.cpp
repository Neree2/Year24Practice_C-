#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a,b,g;
    cin>>a>>b>>g;
    if(g-b-1>b-a-1){cout<<g-b-1;}
    else{cout<<b-a-1;}
    return 0;}
