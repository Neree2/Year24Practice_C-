#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,mi=1000000000;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        if(a[i].second<mi){mi=a[i].second;}}
    int s=1,b=0;
    for(int i=0;i<n;i++){
        if(abs(a[i].first-a[i].second)<=mi){
            s*=a[i].first;
            b+=a[i].second;
            n--;}}
    cout<<abs(s-b);
    return 0;
}
