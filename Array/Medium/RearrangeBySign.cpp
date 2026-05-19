#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int i = 0 , j = 0 ;
        vector<int> ans;
        while(i < arr.size()  && j < arr.size()){
            while(j < arr.size()){
                if(arr[j] < 0){
                    break;
                }
                j++;
            }
            while(i < arr.size()){
                if(arr[i] > 0){
                    break;
                }
                i++;
            }
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j++;
        }
        return ans;
    }
};

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    
    Solution obj;
    obj.rearrangeArray(arr);
}