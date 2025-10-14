//TC=O(N)
//SC=O(1)

#include<bits/stdc++.h>
using namespace std;

int sumDigit(int n){
    int sum = 0;
    while(n){
        int r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}

int main(){
    long long int n = 12345678;

    int ans = sumDigit(n);
    cout << ans << "\n";
}