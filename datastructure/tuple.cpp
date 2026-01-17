// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<tuple<int,int,string>>v;
    v.push_back({1,2,"ayush"});
     v.push_back({2,3,"ayuh"});
      v.push_back({5,2,"ush"});
    
    // for(int i=0;i<v.size();i++){
    //     cout<<get<0>(v[i]);
    //     cout<<get<1>(v[i]);
    //     cout<<get<2>(v[i]);
    // }
    
    for(auto it:v){
        int a,b;
        string c;
        tie(a,b,c)=it;
        cout<<a<<b<<c;
    }
    return 0;
}