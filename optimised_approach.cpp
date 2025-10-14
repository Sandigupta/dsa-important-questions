//TC=O(logN);
//SC=O(1)


#include<bits/stdc++.h>
using namespace std;


int sumDigit(int n){
    if(n==0){
        return 0;
    }

    return n%10+sumDigit(n / 10);
}

int main(){
    int n = 12345678;

    int ans = sumDigit(n);
}