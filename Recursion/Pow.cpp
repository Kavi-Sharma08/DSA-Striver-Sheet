#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double pow (double n , long long k ){
        if( k == 1){
            return n;
        }
        if(k == 0){
            return 1;
        }

        double power = pow( n , k / 2);

        power = power*power;

        if(k % 2 == 1){
            power = power * n;
        }

        return power;

    }
    double myPow(double n , int k) {
        long long x = k;
        if(x < 0){
            x = -x;
            n = 1/n;
        }
        return pow(n , x );
    }
};

int main(){
    Solution obj;
    cout<<obj.myPow(5 , 25);
    

}