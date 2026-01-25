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
//Count distinct elements in every window gfg
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<k;i++){
            mpp[arr[i]]++;
        }
        ans.push_back(mpp.size());
        for(int i=k;i<arr.size();i++){
            mpp[arr[i-k]]--;
            if(mpp[arr[i-k]]==0){
                mpp.erase(arr[i-k]);
            }
            mpp[arr[i]]++;
            ans.push_back(mpp.size());
        }
        return ans;
    }
};