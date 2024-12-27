#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    unsigned int n,m,y;
    cin>>n>>m>>y;
    if(m+y-n>y){cout<<m+y<<" "<<m+y-n;}
    else{cout<<2*(m+y)<<" "<<2*(m+y)-n;}
    return 0;}
