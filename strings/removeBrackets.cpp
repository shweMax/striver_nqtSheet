#include<bits/stdc++.h>
using namespace std;
void removeBrackets(string s, int len){
    string result;
    for(int i=0; i<len; i++){
        if(s[i]!='(' && s[i]!=')'){
            result+=s[i];
        }
    }
    cout<<result<<endl;
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    int len= s.length();

    removeBrackets(s, len);
}