#include<bits/stdc++.h>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        
        if(s.length()<=10){
            cout<<s<<endl;
        }else{
            char first = s.front();
            char last = s.back();
            int Number = s.length() - 2;
            string result = string(1, first) + to_string(Number) + string(1, last);
            cout<<result<<endl;
        }
    }
}