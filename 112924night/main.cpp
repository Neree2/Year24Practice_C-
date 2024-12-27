#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    ios_base::sync_with_stdio(0);cin.tie(0);
    int i=0,j=0;
    for(auto a:s){
        i=(i*10+(a-'0'))%3;
        j=(j*10+(a-'0'))%11;}
    cout<<i<<' '<<j;
    return 0;
}
