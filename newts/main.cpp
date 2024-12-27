#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        for(int j=a.length()-i-2;j>=0;j--){cout<<" ";}
        for(int j=i-1;j>=0;j--){
            cout<<a[j+1];}
        for(int j=0;j<=i;j++){cout<<a[j];}
        cout<<'\n';
    }
    return 0;}
