#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, c=0;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(v[i]>v[j])
            {c++;}
    }
    }
    printf("%d",c);

    return 0;
}
