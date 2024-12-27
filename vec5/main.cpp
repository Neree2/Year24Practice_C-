#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int check(vector<int> v){
    int co=0;
    for(int i: v){
        if(i<0){
            co++;
        }
    }
    return co;
}

int main()
{
    vector<int> numbers1{1,7,20,20,-1,30,-100};
    int result=check(numbers1);
    cout<<"countNegatives({1,7,20,20,-1,30,-100}) -> "<<result<<endl;
    vector<int> numbers2{};
    int result2=check(numbers2);
    cout<<"countNegatives({}) -> "<<result2<<endl;
    vector<int> numbers3{2,7,352,8,47,26,0,6};
    int result3=check(numbers3);
    cout<<"countNegatives({2,7,352,8,47,26,0,6}) -> "<<result3<<endl;
    vector<int> numbers4{3578,-6243,2354,263,46};
    int result4=check(numbers4);
    cout<<"countNegatives({3578,-6243,2354,263,46}) -> "<<result4<<endl;
    vector<int> numbers5{-1,-100,-2,-199,-3};
    int result5=check(numbers5);
    cout<<"countNegatives({-1,-100,-2,-199,-3}) -> "<<result5;

    return 0;
}
