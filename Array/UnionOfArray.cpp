#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 =  {2,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,44,545};

    int i = 0 , j = 0 ;
    vector<int> ans;
    while( j < arr2.size() && i < arr1.size()){
        if(arr1[i] == arr2[j]){
            if(ans.size() == 0 || ans[ans.size()-1] != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else if(arr1[i] != arr2[j]){
            if(arr1[i] < arr2[j]){
                if(ans.size() == 0  ||  ans[ans.size()-1] != arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            else if(arr1[i] > arr2[j]){
                if(ans.size() == 0 || ans[ans.size()-1] != arr2[j]){
                    ans.push_back(arr2[j]);
                }
                j++;
            }
        }

    }

    while(i < arr1.size()){
        if(ans.size() == 0 || ans[ans.size()-1] != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while(j < arr2.size()){
        if(ans.size() == 0 || ans[ans.size()-1] != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }

    for(int i : ans){
        cout<<i<<" ";
    }

    // for(int i = 0 ; i < arr2.size() ; i++){
    //     arr1.push_back(arr2[i]);
    // }

    // map<int,int> mpp;
    // for(int i : arr1){
    //     mpp[i]++;
    // }

    // vector<int> ans;

    // for(auto it = mpp.begin() ; it!=mpp.end() ; ++it){

    //     if(it->second > 1){
    //         ans.push_back(it->first);
    //     }
    // }

   

    

}