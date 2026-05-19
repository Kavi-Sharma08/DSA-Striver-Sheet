#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0 ;
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                maxOnes++;
            }
            else {
                maxi = max(maxOnes , maxi);
                maxOnes = 0;
            }
        }
        return max(maxOnes , maxi);
    }
};

int main(){
    vector<int> arr = {1,0,1,1,0,1};
    Solution obj;
    cout<<obj.findMaxConsecutiveOnes(arr);
    

}