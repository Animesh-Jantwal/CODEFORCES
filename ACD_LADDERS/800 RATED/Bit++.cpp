#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    int cnt=0;
    while(t--){
        string str;
        cin>>str;
        
        if(str == "++X" || str == "X++"){
            cnt++;
        }else{
            cnt--;
        }
    }
    cout<<cnt<<endl;
}