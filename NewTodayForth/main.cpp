#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q,a,b,c,co;
    vector<int> x,l,r,ct;
    cin>>n>>q;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<q;i++){
        cin>>a>>b>>c;
        x.push_back(a);
        l.push_back(b);
        r.push_back(c);
    }

       for(int i=0;i<q;i++){
            co=0;
         for(int j=l[i]-1;j<=r[i]-1;j++){
            if(ar[j]==x[i]){
                co++;
            }

         }
         ct.push_back(co);
    }

    for(auto i:ct){
        cout<<i<<"\n";
    }


    return 0;
}
