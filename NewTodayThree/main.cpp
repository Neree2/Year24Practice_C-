#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int Q;
    cin >> Q;
    stack<int> s;
    stack<int> max_s;
    string pp;
    vector<int> results;
    for (int i = 0; i < Q; ++i){
        cin>>pp;
        if(pp=="Push"){
            int n;
            cin>>n;
            s.push(n);
            if(max_s.empty() || n >= max_s.top()){max_s.push(n);}
        }
        else if(pp=="Pop"){
            if(!max_s.empty()){
                results.push(max_s.top());
        }
            s.pop();

        }

    }
    for(int result: results){
            cout<<max_s[0]<<endl;
    }
    return 0;
}
