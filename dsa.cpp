#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World";
    cout<<"hi";
    return 0;
}
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     list<int>ls;
// //     ls.push_back(2);
// //     ls.emplace_back(4);
// //     ls.push_front(6);
// //     // for (int val : ls ){
// //     //     cout << val << " ";
// //     // }
// //     for(auto it:ls){
// //         cout<<it<<" ";
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     deque<int>dq;
//     dq.push_back(1);
//     dq.emplace_back(2);
//     dq.push_front(4);
//     dq.emplace_front(3);
//     dq.pop_back();
//     dq.pop_front();
//     for(auto it:dq){
//         cout<<it<<" ";
//     }
// }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     vector<int>v={10,20,12,23,35,36};
// //     v.erase(v.begin()+2,v.begin()+5);
// //     for(int i=0;i<v.size();i++){
// //         cout<<v[i]<<" ";
// //     }
// //     return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main() {
// // 	queue<int>q;
// // 	q.push(1);
// // 	q.push(2);
// // 	q.emplace(4);
// // 	q.back()+=5;
// // 	while (!q.empty()) {
// //         cout << q.front() << " ";
// //         q.pop();
// //     }
// // 	cout<<endl;
// // 	cout<<q.back()<<endl;
// // 	cout<<q.front()<<endl;;
// // 	q.pop();
// // 	cout<<q.front();
// // 	return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	priority_queue<int>pq;
// 	pq.push(5);
// 	pq.push(2);
// 	pq.push(8);
// 	pq.emplace(10);
// 	cout<<pq.top()<<endl;
// 	priority_queue<int,vector<int>,greater<int>>pq1;
//     pq1.push(5);
// 	pq1.push(2);
// 	pq1.push(8);
// 	pq1.emplace(10);
// 	cout<<pq1.top();
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     set<int>st;
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     st.insert(4);
//     st.insert(5);
//     st.insert(3);
//     for( auto it:st){
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     st.erase(5);
//     for( auto it:st){
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     int cnt=st.count(1);
//     cout<<cnt<<endl;
//     auto it=st.find(3);
//     st.erase(it);
//     for( auto it:st){
//         cout<<it<<" ";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     for(auto it:ms){
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     ms.erase(1);
//     for(auto it:ms){
//         cout<<it<<" ";
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// void printMap(map<int, string> &m){
//     for (auto it:m){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
// }

// int main()
// {
//     map<int, string> reg;
//     reg[10]= "Anshaj";
//     reg[1]= "Ayush";
//     reg[3]= "Panda";
//     reg.erase(10);
//     printMap(reg);
//     int toFind=10;
//     // if(reg.find(toFind)!=reg.end()) cout<<"key is present"<<endl;
//     // else cout<<"key is not present"<<endl;
//     // cout<<reg[10]<<" ";
//     map<int,int>m;
//     cout<<m[5]<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //vector is dynamic,resize.
//     vector<int>vec;
//     vec.push_back(3);
//     vec.push_back(6);
//     vec.push_back(23);
//     vec.push_back(10);
//     vec.emplace_back(19);
//     cout<<vec.size()<<" ";
//     sort(vec.begin(),vec.end());
//     for(int val: vec){
//         cout<<val<<" ";
//     }
//     cout<<"val at index 2 "<<vec[2]<<" or "<<vec.at(2)<<endl;
//     cout<<" value at front "<<vec.front()<<endl;
//     cout<<"value at back "<<vec.back()<<endl;
//     vector<int> arr(3,12);
//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     vector <int> vec1={1,2,3,4,5};
//     vector <int> vec2(vec1);
//     for(int val:vec2){
//         cout<<val<<" ";
//     }
//     vector <int> vec1={1,2,3,4,5};
//     //vec1.erase(vec1.begin()+2);
//     vec1.erase(vec1.begin()+1,vec1.begin()+4);
//      for(int val:vec1){
//         cout<<val<<" ";
//     }
//     vector <int> vec={1,2,3,4,5};
//     vec.insert(vec.begin()+2,100);
//     //vec.clear();
//      for(int val:vec){
//         cout<<val<<" ";
//     }
//     vector <int> vec={1,2,3,4,5};
//     cout<<"vec.end :  "<<*(vec.begin())<<endl;
//     cout<<"vec.end :  "<<*(vec.end())<<endl;
//     vector<int> vec={1,2,3,4,5};
//     vector<int>::iterator it;
//     for(it=vec.begin();it!=vec.end();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
//     for(auto it=vec.rbegin();it!=vec.rend();it++){
//         cout<<*(it)<<" ";
//     }
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     deque<int> l;
// //     l.push_back(1);
// //     l.push_back(2);
// //     l.push_front(3);
// //     l.push_front(5);
// //     for(int val:l){
// //         cout<<val<<" ";
// //     }
// //     cout<<endl;
// //     cout<<l[2]<<endl;
    
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // pair<int , int> p={1,5};
//     // pair<int,pair<char,int>>p={1,{'a',3}};
//     // cout<<p.first<<endl;
//     // cout<<p.second.first<<endl;
//     // cout<<p.second.second<<endl;
//     vector<pair<int,int>> vec={{1,2},{2,3},{4,5}};
//     vec.push_back({4,5}); // insert
//     vec.emplace_back(6,7);// in-place objects create
//     //vec.emplace_back(4,5);
//     for(auto p: vec){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }


// // stack
// #include <bits/stdc++.h>
//  using namespace std;
// // We only remove or insert only from top
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     stack<int> s2;
//     s2.swap(s);
//     cout<<s.size()<<endl;
//     cout<<s2.size()<<endl;
//     cout<<s.top()<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//    cout<<endl;
//     return 0;
// }

// //  Queue
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     // queue<int> q;
//     // q.push(1);
//     // q.push(2);
//     // q.push(3);
//     // cout<<q.front()<<endl;
//     // while(!q.empty()){
//     //     cout<<q.front()<<" ";
//     //     q.pop();
//     // }
//     priority_queue<int> q;
//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
// return 0;
// }


// //map
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //      map<string,int> m;
// //     //m[key]=value (insert,change)
// //     m["tv"]=100;
// //     m["laptop"]=39;
// //     m["headphones"]=50;
// //     m.emplace("camera",25);
// //     for(auto p:m){
// //         cout<<p.first<<" "<<p.second;
// //     }
// //     cout<<m.count("laptop")<<endl;
// //     cout<<m["laptop"]<<endl;
// //     // it always come in sorted 
// //     if(m.find("camera")!=m.end()){
// //         cout<<"found\n";
// //     }
// //     else{
// //         cout<<"not found\n";
// //     }
// // return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     multimap<string ,int> m;
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     m.emplace("tv",100);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<endl;
//     m.erase(m.find("tv"));
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }

// //sets
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// //     // unique value, sorted 
// //     //0(logn)
// //     // multiset can be used to get 1 or more unique values
// // set <int> s;
// // s.insert(1);
// // s.insert(0);
// //  s.insert(4);
// //  s.insert(2);
// // s.insert(5);
// //     s.insert(6);
// //     cout<<s.size()<<endl;
// //     cout<<*s.lower_bound(3)<<endl;
// //     cout<<*s.upper_bound(3)<<endl;
// // for(auto val: s){
// //     cout<<val<<" ";
// // } 
// //     cout<<endl;
// // SORTING
//     // sort(arr,arr+n)
//     int arr[5]={3,5,1,8,2};
//     sort(arr,arr+5);
//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     vector<int> vec={3,5,1,8,2};
//    // sort(vec.begin(),vec.end());
//     sort(vec.begin(),vec.end(),greater<int>());// for reverse order
//     for(int val:vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
    
// }


// #include <bits/stdc++.h>
// using namespace std;
// // bool comparator(pair<int,int> p1,pair<int ,int> p2){
// //     if(p1.second<p2.second) return true;
// //         if(p1.second>p2.second) return false;
// //             if(p1.first<p2.first) return true;
// //     else return false;
// // }
// // int main(){
// //     vector<pair<int,int>>vec={{3,1},{2,1},{7,1},{5,2}};
// //     sort(vec.begin(),vec.end(),comparator);
// //     for(auto p:vec){
// //         cout<<p.first<<" "<<p.second<<endl;
// //     }
// //     return 0;
// // }
// // int main(){
// //     // vector<int> vec={1,2,3,4,5};
// //     // reverse(vec.begin(),vec.end());
// //     // for(auto val:vec){
// //     //     cout<<val<<endl;
// //     // }
// //     cout<<max(4,5)<<" "<<min(6,7)<<endl;
// //     int a=5,b=10;
// //     swap(a,b);
// //     cout<<a<<" "<<b;
// //     return 0;
// // }
// // binary search
// #include <iostream>
// #include <vector>
// using namespace std;
// bool binary(vector<int>v,int key){
//     int low=0;
//     int high=v.size()-1;
//     while(low<=high){
//         int mid=((high-low)/2)+low;
//         if(v[mid]==key){
//             return true;
//         }
//         if(v[mid]>key){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }    
//     }
//     return false;
// }
// int main(){
//     vector<int> v={1,2,3,4,5,6,7,8,9};
//     int key;
//     cin>>key;
//     if(binary(v,key)){
//         cout<<key<<" found";
//     }
//     else{
//         cout<<key<<"not found";
//     }
// }
// // square root through binary method
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long  n;
//     cin>>n;
//     long long low=1;
//     long long high=n;
//     long long ans;
//     while(low<=high){
//         long long mid=((high-low)/2)+low;
//         if((mid*mid)==n){
//             cout<<mid<<endl;
//             return 0;
//         }
//         if((mid*mid)<n){
//             ans=mid;
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<ans;
    
// }
// // Search insert by loop method
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={1,3,5,6};
//     int key=4;
//     for(int i=0;i<v.size();i++){
//         if(key<v[0]){
//             cout<<"0";
//             break;
//         }
//         else if(key==v[i]){
//             cout<<i;
//         }
//         else if((v[i]<key)&&(v[i+1]>key&&((i+1)<v.size()))){
//             cout<<i+1;
//         }
//         else if(key>v[v.size()-1]){
//             cout<<v.size();
//             break;
//         }
//     }
//     return 0;
// }


// // lower and upper bound
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v={1,2,8,10,10,12,19};
//     int key=-100;
//     int low=0;
//     int high=v.size()-1;
//     while(low<=high){
//         int mid=((high-low)/2)+low;
//         if((v[mid]<key)&&(v[mid+1]>key)){
//             cout<<mid;
//             break;
//             return 0;
//         }
//         if(key>v[v.size()-1]){
//             cout<<v.size()-1;
//             break;
//             return 0;
//         }
//         if(key<v[0]){
//             cout<<"-1";
//             return 0;
//         }
//         if(v[mid]>key){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return 0;
// }
// // First and last occurence through loop method
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// vector<int> arr(n);
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int key;
// cin>>key;
// int first=-1;
// int last=-1;
//  for(int i=0;i<n;i++){
//     if(arr[i]==key){
//         if(first==-1){
//             first=i;
//         }
//         last=i;
//     }
//  }
//  cout<<first<<" "<<last;
// }
// // First and last occurence through binary search method
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={1,3,5,5,5,5,67,123,125};
//     int target=7;
//     int low=0;
//     int high=v.size()-1;
//     int first=-1;
//     int last=-1;
//     while(low<=high){
//         int mid=((high-low)/2)+low;
//         if(v[mid]==target){
//             first=mid;
//             high=mid-1;
//         }
//         if(v[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     low=0;
//     high=v.size()-1;
//     while(low<=high){
//         int mid=((high-low)/2)+low;
//         if(v[mid]==target){
//             last=mid;
//             low=mid+1;
//         }
//         if(v[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     cout<<first<<" "<<last;
//     return 0;
// }
// // kako bananas greeks for greeks
// class Solution {
//   public:
//     bool check(vector<int>& arr, int mid, int k) {
//     int hours = 0;
//     for (int i = 0; i < arr.size(); i++) {
//         if(arr[i]<=mid){
//           hours++;
//         }
//         else{
//           if (arr[i] % mid == 0)
//             hours += arr[i] / mid;
//         else
//             hours += arr[i] / mid + 1;
//     }
//         }
//     if(hours <= k){
//       return true;
//     }
//   return false;
// }
//     int kokoEat(vector<int>& arr, int k) {
//         sort(arr.begin(),arr.end());
//         int low= 1;
//         int high = arr.back();
//         int minmhour = high;
//         while (low<= high) {
//         int mid = low+ (high - low) / 2;
//         if (check(arr, mid, k)) {
//             minmhour = mid;       
//             high = mid - 1;
//         } else {
//             low = mid + 1;    
//         }
//     }
//     return minmhour;   
//     }
// };
// #include <bits/stdc++.h>
// using namespace std; 
// bool test(vector<int> &arr ,int mid,int k){ 
//     int sum=0; 
//     int count=0; 
//     for(int i=0;i<arr.size();i++){ 
//         if(arr[i]<=mid){ 
//             sum=sum+arr[i]; 
//             count++;
//         } 
        
//     } 
//     if(sum<=k){ 
//         return true; 
        
//     } return false; 
    
// } 
// int maxmbooks(vector<int> &arr,int k){ 
//     sort(arr.begin(),arr.end()); 
//     int low=1; 
//     int high=arr.back(); 
//     int time=0; 
//     while(low<=high){ 
//         int mid=((high-low)/2)+low; 
//         if(test(arr,mid,k)){ 
//             time=mid; low=mid+1;
//         } 
//         else{ high=mid-1;
//         }
//     }
// }
// int main(){
//     vector<int> arr={3,1,2,1};
//     int k=5;
//     cout<<minmbooks(arr,k)<<endl;
//     return 0;
// }

// // code forces problem1
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int>arr(n,0);
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     int sum=0;
//     int count=0;
//     for(int i=0;i<n;i++) {
//         if(sum + arr[i] <= k) {
//             sum += arr[i];
//             count++;
//         } 
//         else{
//             break;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }
// // TWO sum - pair with given sum gfg
// class Solution {
//   public:
//     bool twoSum(vector<int>& arr, int target) {
//         // code here
//         sort(arr.begin(),arr.end());
//         int low=0;
//         int high=arr.size()-1;
//         while(low<high){
//             if((arr[low]+arr[high])==target){
//                 return true;
//             }
//             else if((arr[low]+arr[high])>target){
//                 high=high-1;
//             }
//             else{
//                 low=low+1;
//             }
//         }
//         return false;
//     }
// };
// //  missing element gfg
// class Solution {
//   public:
//     int missingNum(vector<int>& arr) {
//         // code here
//         int sum1=0;
//         int sum2=0;
//         for(int i=0;i<arr.size();i++){
//             sum1=sum1+arr[i];
//         }
//         for(int i=0;i<=arr.size()+1;i++){
//             sum2=sum2+i;
//         }
//         return sum2-sum1;
//     }
// };
// // kadane algorithm Gfg
// class Solution {
//   public:
//     int maxSubarraySum(vector<int> &nums) {
//         // Code here
//         int sum=0;
//         int ans=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             ans = max(sum,ans);
//             if(sum<0) sum=0;
//         }
//         return ans;  
//     }
// };
// // maximum subarray sum leetcode
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum=0;
//         int ans=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             ans = max(sum,ans);
//             if(sum<0) sum=0;
//         }
//         return ans;   
//     }
// };
// floor in sorted array gfg
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int ans;
        int low=0;
        int high=arr.size()-1;
        if(arr[low]>x){
            return -1;
        }
        else{
            while(low<=high){
                int mid=((high-low)/2)+low;
                if(arr[mid]<=x){
                    ans=mid;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return ans;
    }
};
// leetcode maximum consecutive ones problem
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        return max;
    }
};
// kth largets number leetcode 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j;
        if(k<=n){
            j=nums[n-k];
        }
        return j;
    }
};
// majority element leetcode
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int max=1;
        int j=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>max){
                max=count;
                j=nums[i];
            }
        }
    return j;
    }
};
// length of linked list gfg
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
};
// printing of element of linked list gfg
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        Node *current=head;
        vector<int> ans;
        while(current!=NULL){
            ans.push_back(current->data);
            current=current->next;
        }
        return ans;
    }
};
// linked list insertion gfg
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *newNode= new Node();
        newNode->data=x;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            return head;
        }
        Node *current=head;
        while(current->next !=NULL){
            current=current->next;
        }
        current->next=newNode;
        return head;
    }
};
// First and last occurence leetcode
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        int last=-1;
        vector<int> ans={-1,-1};
        while(low<=high){
            int mid=((high-low)/2)+low;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        ans[0]=first;    
        low=0;
        high=nums.size()-1;    
        while(low<=high){
            int mid=((high-low)/2)+low;
            if(nums[mid]==target){
                last=mid;
                low=low+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        ans[1]=last;
        return ans;
    }
// Minimum time to complete trips leetcode
public:
    bool test(vector<int>& time, long long mid, int totalTrips) {
    long long trips = 0;
    for (int i = 0; i < time.size(); i++) {
        trips=trips+mid/time[i];
        if(trips>=totalTrips){
            return true;
        }
    }
    return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long low= 1;
        long long high = 1E18;
        while (low<=high) {
        long long mid = low+(high-low)/2;
        if (test(time, mid, totalTrips)) {     
            high = mid - 1;
        } 
        else {
            low = mid + 1;    
        }
    }
    return low; 
    }