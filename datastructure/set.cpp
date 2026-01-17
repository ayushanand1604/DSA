// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>s;
    s.insert(10);
     s.insert(20);
      s.insert(30);
       s.insert(10);
       for(auto it:s){
           cout<<it<<endl;
       }
       if(s.find(40)!=s.end()){
           cout<<"true";
       }
       else cout<<"false";
       if(s.count(10)) cout<<"true";
       else cout<<"false";
    return 0;
}
//multiset
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int>s;
    s.insert(10);
     s.insert(20);
      s.insert(30);
       s.insert(10);
       for(auto it:s){
           cout<<it<<endl;
       }
       if(s.find(40)!=s.end()){
           cout<<"true";
       }
       else cout<<"false";
       if(s.count(10)) cout<<"true";
       else cout<<"false";
    return 0;
}
