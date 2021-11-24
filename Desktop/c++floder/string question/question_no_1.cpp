///count the number of world......//length of the string.....
#include<iostream>
using namespace std;
int count(string A){
    int i=0;
    for(i=0;A[i]!='\0';i++){

    }
    return i;
}
int main(){
    string name;
    getline(cin,name);
    cout<<"length of the string is : "<<" "<<count(name);
    return 0;
}