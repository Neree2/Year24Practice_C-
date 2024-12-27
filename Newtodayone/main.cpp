#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    if(N>=1||N<=200){
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            cout<<".";
        }
        for(int i=0;i<N;i++){
            cout<<"###";
        }
        for(int i=0;i<N;i++){
            cout<<".";
        }cout<<endl;
    }
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            cout<<"#";
        }
        for(int i=0;i<N;i++){
            cout<<"..";
        }
        for(int i=0;i<N;i++){
            cout<<"..";
        }cout<<endl;}
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            cout<<"#";
        }
        for(int i=0;i<N;i++){
            cout<<"..";
        }
        for(int i=0;i<N;i++){
            cout<<"##";
        }cout<<endl;}
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            cout<<"#";
        }
        for(int i=0;i<N;i++){
            cout<<"...";
        }
        for(int i=0;i<N;i++){
            cout<<"#";
        }cout<<endl;}
    for(int j=0;j<N;j++){
        for(int i=0;i<N;i++){
            cout<<".";
        }
        for(int i=0;i<N;i++){
            cout<<"###";
        }
        for(int i=0;i<N;i++){
            cout<<".";
        }cout<<endl;}
    }

    return 0;
}
