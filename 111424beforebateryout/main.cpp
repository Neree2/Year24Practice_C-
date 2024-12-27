#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,ma=-2000000001,mi=2000000001;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int b;
        cin>>b;
        if(b>=ma){ma=b;}
        if(b<=mi){mi=b;}
    }
    cout<<mi<<'\n'<<ma;
    return 0;
}
