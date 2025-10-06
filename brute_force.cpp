/*
Check if two Strings are Anagrams of each other

Given two non-empty strings s1 and s2 of lowercase letters, determine if they are anagrams — i.e., if they contain the same characters 
with the same frequencies.

TC=O(NlogN)
SC=O(1)
 */
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1 ="geeks";
    string s2 = "kseeg";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){
        cout << "True" << "\n";
    }else{
        cout << "False" << "\n";
    }

}