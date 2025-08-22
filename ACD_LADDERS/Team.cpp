#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    vector<vector<int>> arr(n, vector<int>(3));
 
    for(int j=0;j<n;j++){
        for(int i=0;i<3;i++){
        cin>>arr[j][i];
            
        }
    }
    
    int ans=0;
    int sum=0;
    
    for(int j=0;j<n;j++){
        for(int i=0;i<3;i++){
            if(arr[j][i]==1){
                sum++;
            }
            if(sum==2){
                ans++;
                break;
                
            }
        }
        sum=0;
    }
    cout<<ans<<endl;
}
