#include<bits/stdc++.h>
using namespace std; //123xyz1
void sumofnum(string s, int len) {
    string temp;
    int sum=0;
    for (int i=0; i<len; i++) {
        if (s[i]>='0' && s[i]<='9') {
            temp.push_back(s[i]);
        }
        else{
            if (!temp.empty()) {
                sum += stoi(temp);
                temp.clear();
            }
        }
    }
    if (!temp.empty()) {
        sum += stoi(temp);
    }
    cout<<"The sum of the numbers in the string is: "<<sum<<endl;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int len= s.length();

    sumofnum(s,len);
}