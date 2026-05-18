#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helper(string s , int ind , long long ans , int sign){

        if(ind >= s.size() || !isdigit(s[ind])){
            return (int)(sign*ans);
        }
        int num = s[ind] - '0';
        ans = ans*10 + num;

        if (ans*sign <= INT_MIN) return INT_MIN;
        if(ans*sign >= INT_MAX) return INT_MAX;
        return helper(s , ind + 1 , ans , sign);
    }

    int myAtoi(string s) {
        int i = 0 ;
        while(i < s.size() && s[i] == ' ') i++;

        int sign = 1 ;

        if(s[i] == '-'){
            sign = -1 ;
            i++;
        }
        else if(s[i] == '+'){
            i++;
        }

        int ans = 0 ;
        return helper(s , i , ans , sign);
        
    }

};

int main(){
    Solution obj;
    cout<<obj.myAtoi("+-12");
    

}