#include<bits/stdc++.h>
using namespace std;
int longestInteger(vector<int> &arr){
    sort(arr.begin() , arr.end());
    unordered_set<int> st(arr.begin() , arr.end());
    int maxLen  INT_MIN;

    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int count = 1;
            auto it1 = it;
            while(st.find(it1+1)!=st.end()){
                count++;
                ++it1;
            }
            maxLen = max(count , maxLen);
        }
    }
    for(auto it = st.begin() ; it != st.end() ; ++it){
        if(st.find(*it-1)==st.end()){
            
            int count =1;
            auto it1 = *it;
            while(st.find(it1 + 1 )!=st.end()){
                count++;
                ++it1;
            }
            maxLen = max(count , maxLen);
        }
    }
    return maxLen;

}
int main(){
    vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout<<longestInteger(arr);
}