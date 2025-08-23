#include<bits/stdc++.h>
#include<string>
 
using namespace std;
 
int main(){
    string st;
    cin>>st;
    
    unordered_set<char> distinctChars;
    
    for (char c : st) {
        distinctChars.insert(c);
    } 
    
    int size = distinctChars.size();
    
    if(size % 2 == 0 ){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
}