#include<bits/stdc++.h>
using namespace std;
void removecharacters(string s, int len){
    string result;
    for(int i=0; i<len; i++){
        if(int(s[i])>=65 && int(s[i])<=90 || int(s[i])>=97 && int(s[i])<=122 || s[i]==' '){
            result+=s[i];
        }
    }
    cout<<result<<endl;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int len= s.length();

    removecharacters(s, len);
}