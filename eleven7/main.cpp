#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,j,i;

    for(int g=1;g<=10;g++){
        for(k=1;k<=g;k++){
            cout<<" ";
        }
        for(int h=10;h>=0;h--){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}
