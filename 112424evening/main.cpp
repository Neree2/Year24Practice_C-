#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,o=0,e=0;
    cin>>n;
    while(n!=0){
        if(n%2==0){e+=n;}
        else{o+=n;}
        cin>>n;
    }
    cout<<e<<" "<<o;
    return 0;
}
