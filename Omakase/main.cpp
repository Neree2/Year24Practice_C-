#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    cin>>Q;
    string s,s2;
    for(int i=0;i<Q;i++){
        cin>>s>>s2;
        if(s.length()!=s2.length()){
            cout << "not same"<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());
        if(s==s2){
            cout << "same"<<endl;
        }
        else{
            cout << "not same"<<endl;
        }
    }


    return 0;
}
