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