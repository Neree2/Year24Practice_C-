#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string pa;
    cout<<"Input: ";
    cin>>pa;
    string ne="";
    for(int i=pa.length()-1;i>=0;i--){
        ne+=pa[i];
    }
    if(pa==ne){
        cout<<"True";}
    else if(pa!=ne){
        cout<<"False";}
    return 0;
}
