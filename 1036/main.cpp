#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n,q,d,l,r;
    vector<ll> v(n);
    cin >> n >> q;
    for(int i=0;i<n;++i){
        cin >> d;
        v.push_back(d);}
    for(int i=0;i<q;++i){
        cin >> l >> r;
        int f = l-1;
        ll sum=v[l-1];
        for(ll j=l;j<=r-1;++j){
            if((j-f)%2 == 1){sum-=v[j];}
            else{sum+=v[j];}}
        cout << sum << '\n';}}

