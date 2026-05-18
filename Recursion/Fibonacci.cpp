#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n <= 1) return n;

    return func(n-1) + func(n-2);
}
int main(){
    int n = 10;
    cout<<func(n);
    

}