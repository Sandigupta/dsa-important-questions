/*
Given an array arr[] of size n, the task is to find the length of the Longest Increasing Subsequence (LIS)
i.e., the longest possible subsequence in which the elements of the subsequence are sorted in increasing
order.

TC=O(N^2);

SC=O(1);
*/

#include<bits/stdc++.h>
using namespace std;

int LongestIncSub(int arr[],int n){
    int maxLen = 0;

    for (int i = 0; i < n;i++){
        int crt = 1;
        int crtMax = arr[i];

        for (int j = i+1; j < n;j++){
            if(arr[j]>crtMax){
                crtMax = arr[j];
                crt++;
            }
        }
        maxLen = max(maxLen, crt);
    }
    return maxLen;
}

int main(){
    int arr[] = {3, 10, 2, 1, 20};

    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = LongestIncSub(arr, n);
}