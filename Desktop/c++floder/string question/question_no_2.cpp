//changing case of the string.....
#include<iostream>
using namespace std;
string changingCase(string A){
    for(int i=0;A[i]!='\0';i++){
        if(A[0]>='a' && A[0]<='z'){
            A[0]=A[0]-32;
        }
        if(A[i]>='A' && A[i]<='Z'){
            A[i]=A[i]+32;
        }
    }
    for(int i=0;A[i]!='\0';i++){
         if(A[i]=='.'){
             A[i+1]=A[i+1]-32;
         }        
    }
    return A;   
}
int main(){
    string s;
    getline(cin,s);
    cout<<"our pure sentence is :"<<" "<<changingCase(s);
    return 0;
}