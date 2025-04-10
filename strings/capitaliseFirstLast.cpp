#include<bits/stdc++.h>
using namespace std;
void capitaliseFirstLast(string s, int len){
    s[0]=toupper(s[0]);
    s[len-1]=toupper(s[len-1]);
    for(int i=0; i<len; i++){
        if(s[i-1]==' '){
            s[i]= toupper(s[i]);
        }
        else if(s[i+1]==' '){
            s[i]=toupper(s[i]);
        }
    }
    cout<<"The result is: "<<s<<endl;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    int len = s.length();

    capitaliseFirstLast(s, len);
}