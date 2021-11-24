//count number of the vowels and constatnat......
#include<iostream>
using namespace std;
void count(string A){
    int count_vowels=0;
    int count_constantant=0;
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' ||
        A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            count_vowels++;
        }
        else{
            count_constantant++;
        }
    }
        cout<<count_vowels<<endl;
        cout<<count_constantant<<endl;
}
int main(){
    string s;
    getline(cin,s);
    count(s);
    return 0;
}