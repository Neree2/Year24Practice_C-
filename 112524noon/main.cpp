#include <iostream>

using namespace std;

int main(){

string str1 ="This is a string"; //16 characters
string str2; //0 characters
string str3(5,'x');

string str4(str1,2,1);
cout << "str1= " << str1 << endl;

cout <<  "str2= " << str2 << endl;

cout << "str3= " << str3 << endl;

cout << "str4= " << str4 << endl;
cout<<str1.length();
string name ="marcuscode.com";
cout << name.substr(0, 6) << endl;
name.insert(6,"Neree");
cout<<name;
}
