#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,q;
    cin >> n >> q;
    vector<long long int> arr(n),cn,s;
    vector<vector<long long int>> a(q,vector<long long int>(2,0));
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(long long int i=0;i<q;i++){
        cin >> a[i][0] >> a[i][1];
    }
    s.push_back(arr[0]+arr[1]);
    for(long long int i=1;i<n-1;i++){
        s.push_back(arr[i-1]+arr[i]+arr[i+1]);
    }
    s.push_back(arr[n-1]+arr[n-2]);
    sort(s.begin(),s.end());
    for(auto i:a){
        auto l = lower_bound(s.begin(), s.end(), i[0]);
        auto u = upper_bound(s.begin(), s.end(), i[1]);
        cn.push_back(u-l);
    }
    for(auto i:cn){
        cout << i << '\n';
    }
    return 0;
}
