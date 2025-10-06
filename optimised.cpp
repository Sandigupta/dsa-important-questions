#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2){
    int arr[27] = {0};

    int n1 = s1.size();
    int n2=s2.size();

    if(n1!=n2){
        return false;
    }
    
    
    for(int i = 0; i<n1;i++){
        arr[s1[i] - 'a']++;
        arr[s2[i] - 'a']--;
    }

    for (int i = 0; i < 27; i++)
    {
        if(arr[i]!=0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1 ="geeks";
    string s2 = "kseeg";

    
    bool ans = anagram(s1, s2);
    cout << ans << "\n";
}