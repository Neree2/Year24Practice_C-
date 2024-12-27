#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,z=0;
    cin>>n;
    vector<int> v(n),c;
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i=0;i<n;i++){cin>>v[i];}
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){z++;}
        else{
        z++;
        c.push_back(z);
        z=0;}}
    int nz=0;
    sort(c.begin(),c.end());
    int na=c.size()-1;
    for(int i=0;i<n;i++){
        if(v[i]==v[i+1]){nz++;}
        if(nz==c[na]-1&&i!=n-1){
            cout<<v[i]<<" ";i++;}
        if(v[i]!=v[i+1]){nz++;
        nz=0;}}
    return 0;
}
