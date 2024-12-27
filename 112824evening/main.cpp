#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a,b;
    cin>>a>>b;
    if(b%a==0){cout<<b/a;}
    else if(a>b){cout<<b/a+2;}
    else{
        cout<<(b-b%a)/a+1;}
    return 0;
}
