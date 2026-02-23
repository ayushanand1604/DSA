#include <iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Hey"<<endl;
    greet(3);
}
int main(){
    greet(3);

}
// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     print(n);
// }
// #include <iostream>
// using namespace std;
// void print(int x,int n){
//     if(x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     print(1,n);
// }
// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<sum(n);
// }
// #include <iostream>
// #include <math.h>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a;
//     cout<<"Enter a: ";
//     cin>>a;
//     int b;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<power(a,b);
// }
// #include <iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1||n==2) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<fibo(n);
// }
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int ans=factorial(5);
    cout<<ans;
}
// #include <iostream>
// using namespace std;
// void greet(int n){
//     if(n==0) return;
//     cout<<"Hey"<<endl;
//     greet(n-1);
//     cout<<"Hello"<<endl;
// }
// int main(){
//     greet()

// }
// print 1 to n using recursive function gfg
class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n==0){
            return;
        }
        printTillN(n-1);
        cout<<n<<" ";
    }
};
// print N to 1 using recursive function gfg
class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N==0){
            return;
        }
        cout<<N<<" ";
        printNos(N-1);
    }
};
// sum of elements in an array gfg using recursion
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==0){
            return 0;
        }
        arr.pop_back();
        return arr[n-1]+arraySum(arr);
    }
};
// product of two numbers
#include <bits/stdc++.h>
using namespace std;
int product(x,y){
    if(y==0) return 0;
    return x+product(x,y-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);
}
// 3834. Merge Adjacent Equal Elements leetcode
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        for (int i=0;i<nums.size();i++) {
            long long current = nums[i];
            while(!ans.empty()&&ans.back()==current){
                current+=ans.back();
                ans.pop_back();
            }
            ans.push_back(current);
        }
        return ans;
    }
};
// 3833. Count Dominant Indices leetcode 
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int count=0;
        int sum=0;
        for(int i:nums) sum+=i;
        for(int i=0;i<nums.size()-1;i++){
            sum-=nums[i];
            int x=nums.size()-1-i;
            if(nums[i]*x>sum) count++;
        }
        return count;
    }
};