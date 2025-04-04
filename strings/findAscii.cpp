#include<bits/stdc++.h>
using namespace std;
void findAscii(char c){
    cout<<"The ascii value of the character "<<c<<" is: "<<int(c)<<endl;
}
int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    findAscii(c);
}