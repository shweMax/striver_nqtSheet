#include<bits/stdc++.h>
using namespace std;
//Shweta Dutta - attuD atewhS
void revStr(string s, int len){
    int start= 0;
    int end= len-1;
    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout<<s;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    int len= s.length();
    revStr(s,len);
}