#include<bits/stdc++.h>
using namespace std;
void removespace(string s, int len){
    string result;
    for(int i=0; i<len; i++){
        if(string(" ").find(s[i]==string::npos)){
            result+=s[i];
        }
    }
    cout<<"String without space: ";
    cout<<result<<endl;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int length= s.length();

    removespace(s, length);
}