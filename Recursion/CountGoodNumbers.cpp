#include<bits/stdc++.h>
using namespace std;

// Wherever it  is possible that the ans goes beyond the limit use the MOD

class Solution {
public:
    const int MOD = 1e9 + 7;
    long long pow (long long n , long long k ){
        if( k == 1){
            return n;
        }
        if(k == 0){
            return 1;
        }

        long long power = pow( n , k / 2);

        power = (power*power) % MOD;

        if(k % 2 == 1){
            power = (power * n) % MOD;
        }

        return (power)%MOD;

    }
    int countGoodNumbers(long long n) {
        if(n == 1) return 5;
        long long noOfEvenPlaces , noOfOddPlaces;
        if(n%2==0){
            noOfEvenPlaces = n / 2;
            noOfOddPlaces = n / 2;
        }
        else {
            noOfEvenPlaces = (n / 2) + 1;
            noOfOddPlaces = n / 2;
        }

        long long ans1 = pow(5 , noOfEvenPlaces);
        long long ans2 = pow(4 , noOfOddPlaces );

        return (ans1*ans2)%MOD;
    }
};



int main(){

    int n = 50 ;

    Solution obj;
    cout<<obj.countGoodNumbers(n);

    

}