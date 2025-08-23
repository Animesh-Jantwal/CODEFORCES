#include<bits/stdc++.h>
#include<string>
 
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
    
    vector<int> nums;
    stringstream ss(s);
    string temp;
    
    
    
    while (getline(ss, temp, '+')) {
        nums.push_back(stoi(temp));  
    }
    
    sort(nums.begin() , nums.end());
    int n = nums.size();
    string result;
    
    for (int i = 0; i < n; i++) {
        result += to_string(nums[i]); 
        if (i != n - 1) {
            result += "+";  
        }
    }
 
    cout << result << endl;  
}