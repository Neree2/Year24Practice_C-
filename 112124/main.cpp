#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int d,m;
    cin>>d>>m;
    string day[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<m-1;i++){d+=month[i];}
    cout<<day[(d+2)%7];
    return 0;
}
