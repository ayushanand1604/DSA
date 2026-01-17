// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<pair<int,string>>v;
    v.push_back({1,"Ayush"});
    v.push_back({2,"anand"});
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second;
    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i].first;
        cout<<v[i].second;
    }
    return 0;
}