#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,vector<int>>mpp;
    mpp[2]={4,5,6};
    mpp[4]={6,9,8};
    // for(auto it:mpp){
    //     cout<<it.first;
    //     for(auto s:it.second){
    //         cout<<s;
    //     }
    // }
    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first;
        
    }
    return 0;
}
// unique number of ocuurens leetcode using map ans set
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;   
        }
        unordered_set<int>set;
        for(auto it:mpp){
            int freq=it.second;
            set.insert(freq);
        }
        if(set.size()==mpp.size()){
            return true;
        }
        return false;
    }
};