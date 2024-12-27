#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,a,n;
    cout << "Input number of rows: ";
    cin>>n;
    for (i=1;i<=n;i++){
        for(k=n;k>=i;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(a=i-1;a>=1;a--){
            cout<<a;
        }cout<<endl;
    }
    return 0;
}
