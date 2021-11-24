///validating the string
#include<iostream>
using namespace std;
bool valid_string(string s){
    for(int i=0;s[i]!='\0';i++){
        if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]>='0' && s[i]<='9')){
            return false;
        }
    }
    return true;
}
int main(){
    string s="surajpadn@y";
    if(valid_string(s)){
        cout<<"string is valid"<<endl;
    }
    else{
        cout<<"string is not valid"<<endl;
    }
    return 0;
}