/// count number of world in the string......
#include<iostream>
using namespace std;
int count_words(string s){
    int count=1;
     for(int i=0;s[i]!='\0';i++){
            if(s[i]==' ' && s[i-1]!=' '){
                count++;
            } 
     }
     return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<"total no. of word in the string is:"<<" "<<count_words(s)<<endl;
    return 0;
}
