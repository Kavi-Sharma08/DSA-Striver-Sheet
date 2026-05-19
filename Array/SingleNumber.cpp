#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i  : nums){
            ans = ans ^ i;
        }
        return ans;
        
    }
};

int main(){
    vector<int> arr = {2,1,1};
    Solution obj;
    cout<<obj.singleNumber(arr);

}