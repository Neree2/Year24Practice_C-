#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Original Vector elements: " << endl;
    vector<string> v;
    string str;

    for(int i=0; i<4; i++){
        cin>>str;
        v.push_back(str);
    }
    cout << "Find strings that contain a number(s) from the said vector:" << endl;
    for(int i=0; i<v.size();i++){
        bool cou=false;
        for(int j=0; j<v[i].length();j++){
            if(v[i][j]<='9'&&v[i][j]>='0'){
                cou=true;
                break;
            }
        }
        if(cou){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
