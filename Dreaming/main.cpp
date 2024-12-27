#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    string str;
    int sum=0;
    getline(cin,str);
    for(int i=0;i< str.length();i++){
        if(strlen(str)<10){
            break;
        }
        if(str[i]>='0'&&str[i]<='9'){
            sum+=str[i]-'0';
        }
        else if(str[i]>='a'&&str[i]<='z'){
            sum-=str[i]-'a';
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            sum+=str[i]-'A';
        }
        else{
            sum+=0;
        }

    }

    cout << sum << endl;
    return 0;
}
