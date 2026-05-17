#include<bits/stdc++.h>
using namespace std;
//Optimial
class Solution {
public:
    int removeDuplicates1(vector<int> nums) {
        if(nums.size() <= 1) return nums.size();
        int i = 0  , j = 1 ;
        int count = 0 ;
        while( j < nums.size() ){
            if(nums[j] != nums[i]){
                i++;
                swap(nums[i] , nums[j]);
                count++;
            }
            j++;
        }
        return ++count;

        
    }
    int removeDuplicates2(vector<int> nums) {
        if(nums.size() <= 1) return nums.size();
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() ; i++){
            // cout<<"nums " << i <<" " << nums[i]<<" "<<" temp " << temp.size() - 1<<" "<<temp[temp.size()-1]<<endl;
            if(nums[i] != temp[temp.size()-1]){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();

        
    }
    int removeDuplicates3(vector<int> nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        vector<int> ans(st.begin() , st.end());
        sort(ans.begin() , ans.end());
        
        for(int i = 0 ; i < ans.size() ; i++){
            nums[i] = ans[i];
        }
        return ans.size();
        
    }
};

int main() {
    vector<int> nums = {1,1,2,2,2,3,3};
    Solution obj1 , obj2 , obj3;

    cout<<obj1.removeDuplicates1(nums)<<endl;
    cout<<obj2.removeDuplicates2(nums)<<endl;
    cout<<obj3.removeDuplicates3(nums)<<endl;
}