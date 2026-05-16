#include<bits/stdc++.h>
using namespace std;
//Optimial
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
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
}; 
//Better
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != temp[temp.size()-1]){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < temp.size() ; i++){
            nums[i] = temp[i];
        }
        return temp.size();

        
    }
};
//Brute
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        vector<int> ans(st.begin() , st.end());
        sort(ans.begin() , ans.end());
        
        for(int i = 0 ; i < ans.size() ; i++){
            nums[i] = ans[i];
        }
        return ans.size();
        
    }
};