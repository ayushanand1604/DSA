#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World";
    cout<<"hi";
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>ls;
//     ls.push_back(2);
//     ls.emplace_back(4);
//     ls.push_front(6);
//     // for (int val : ls ){
//     //     cout << val << " ";
//     // }
//     for(auto it:ls){
//         cout<<it<<" ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    for(auto it:dq){
        cout<<it<<" ";
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v={10,20,12,23,35,36};
//     v.erase(v.begin()+2,v.begin()+5);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	queue<int>q;
// 	q.push(1);
// 	q.push(2);
// 	q.emplace(4);
// 	q.back()+=5;
// 	while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
// 	cout<<endl;
// 	cout<<q.back()<<endl;
// 	cout<<q.front()<<endl;;
// 	q.pop();
// 	cout<<q.front();
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int>pq;
	pq.push(5);
	pq.push(2);
	pq.push(8);
	pq.emplace(10);
	cout<<pq.top()<<endl;
	priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(5);
	pq1.push(2);
	pq1.push(8);
	pq1.emplace(10);
	cout<<pq1.top();
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(5);
    st.insert(3);
    for( auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    st.erase(5);
    for( auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    int cnt=st.count(1);
    cout<<cnt<<endl;
    auto it=st.find(3);
    st.erase(it);
    for( auto it:st){
        cout<<it<<" ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    ms.erase(1);
    for(auto it:ms){
        cout<<it<<" ";
    }
}
#include <bits/stdc++.h>
using namespace std;
void printMap(map<int, string> &m){
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main()
{
    map<int, string> reg;
    reg[10]= "Anshaj";
    reg[1]= "Ayush";
    reg[3]= "Panda";
    reg.erase(10);
    printMap(reg);
    int toFind=10;
    // if(reg.find(toFind)!=reg.end()) cout<<"key is present"<<endl;
    // else cout<<"key is not present"<<endl;
    // cout<<reg[10]<<" ";
    map<int,int>m;
    cout<<m[5]<<endl;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main(){
    //vector is dynamic,resize.
    vector<int>vec;
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(23);
    vec.push_back(10);
    vec.emplace_back(19);
    cout<<vec.size()<<" ";
    sort(vec.begin(),vec.end());
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<"val at index 2 "<<vec[2]<<" or "<<vec.at(2)<<endl;
    cout<<" value at front "<<vec.front()<<endl;
    cout<<"value at back "<<vec.back()<<endl;
    vector<int> arr(3,12);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    vector <int> vec1={1,2,3,4,5};
    vector <int> vec2(vec1);
    for(int val:vec2){
        cout<<val<<" ";
    }
    vector <int> vec1={1,2,3,4,5};
    //vec1.erase(vec1.begin()+2);
    vec1.erase(vec1.begin()+1,vec1.begin()+4);
     for(int val:vec1){
        cout<<val<<" ";
    }
    vector <int> vec={1,2,3,4,5};
    vec.insert(vec.begin()+2,100);
    //vec.clear();
     for(int val:vec){
        cout<<val<<" ";
    }
    vector <int> vec={1,2,3,4,5};
    cout<<"vec.end :  "<<*(vec.begin())<<endl;
    cout<<"vec.end :  "<<*(vec.end())<<endl;
    vector<int> vec={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}