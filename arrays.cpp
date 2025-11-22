// #include <iostream>
// using namespace std;
// int main(){
//     // 5 integers to store 6 ,2,8,5,0
//     int x[5]; // Declaration
//     x[0]=6;
//     x[1]=2;
//     x[2]=8;
//     x[3]=5;
//     x[4]=0;
//     // cout<<x[0]<<" ";
//     // cout<<x[1]<<" ";
//     // cout<<x[2]<<" ";
//     // cout<<x[3]<<" ";
//     // cout<<x[4]<<" ";
//     for(int i=0;i<5;i++){
//         cout<<x[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     // iF WE WANT TO UPDATE THE VALUE IN ARRAY WE CAN EASILY CHANGE
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={3,9,4,8,2};
//     // OUTPUT REVERSE
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void change(int arr[]){
//     arr[0]=9;
// }
// int main(){
//     int arr[3]={1,2,3};
//     for(int i=0;i<=2;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     change(arr);
//     for(int i=0;i<=2;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=array[i];
//         //sum=sum+arr[i];
//     }
//     cout<<sum;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     int product=1;
//     for(int i=0;i<n;i++){
//         product*=array[i];
        
//     }
//     cout<<"The product is: "<<product;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={12,6,7,34,9,230,2,8,3,6,11};
//     int n =sizeof(arr)/4;
//     int mx=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>mx){
//         mx=arr[i];
//     }
// }
// cout<<mx;
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={12,6,7,34,9,230,2,8,3,6,11};
//     int n =sizeof(arr)/4;
//     int mn=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]<mn){
//         mn=arr[i];
//     }
// }
// cout<<mn;
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]*arr[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//              cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             arr[i]=arr[i]+10;
//         }
//         else if(i%2!=0){
//             arr[i]=arr[i]*2;
//         }
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>a)
//         count++;
//     }
//     cout<<count;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int sum1=0;
//     int sum2=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             sum1=sum1+arr[i];
//         }
//         else if(i%2!=0){
//             sum2=sum2+arr[i];
//         }
//     }
//     int difference=sum1-sum2;
//     cout<<difference;
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int a[]={12,6,7,34,9,230,2,8};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j=n-1-i;
        b[i]=a[j];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1=sum1+arr[i][j];
            }
        }
    }
    int sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j+1==n){
                sum2=sum2+arr[i][j];
            }
        }
    }
            int num;
            num=abs(sum1-sum2);
            cout<<num;
 return 0;

}
     
// remove duplicates from sorted array leetcode
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        while(i < nums.size()) {
            if(nums[i] == nums[i - 1]) {
                nums.erase(nums.begin()+i);
            } 
            else {
            i++;
            }
        }
        return nums.size();
    }
};
// moves zeros to last leetcode
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
        }    
        while(index<nums.size()){
            nums[index]=0;
            index++;
        }
    }
};
// subarray with 0 sum
class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int sum=0;
        map<int ,int> m;
        m[0]++;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            m[sum]++;
            if(m[sum]==2){
                return true;
            }
        }
        return false;
    }
};
// Product array puzzle gfg
class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        int arr1[n];
        int arr2[n];
        long num1=1;
        long num2=1;
        for(int i=0;i<arr.size();i++){
            num1=num1*arr[i];
            arr1[i]=num1;
        }
        for(int i=arr.size()-1;i>=0;i--){
            num2=num2*arr[i];
            arr2[i]=num2;
        }
        vector<int> arr3(n,0);
        for(int i=0;i<arr3.size();i++){
            if(i==0){
                arr3[i] = arr2[i+1];
            }
            else if(i==n-1){
                arr3[i]=arr1[i-1];
            }
            else{
                arr3[i]=arr1[i-1]*arr2[i+1];
            }
        }    
        return arr3;
    }
};
// Adding one gfg 
class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        // code here
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]<9){
                arr[i]+=1;
                return arr;
            }
            arr[i]=0;
        }
        arr.insert(arr.begin(),1);
        return arr;
    }
};
//Given an array arr[] consisting of only 0’s and 1’s, return count of the maximum number of consecutive 1’s or 0’s present in the array. 
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int countone=0;
        int countzero=0;
        int count1=0;
        int count0=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count1++;
                count0=0;
                
            }
            else if(arr[i]==0){
                count1=0;
                count0++;
            }
            if(countone<count1){
                countone=count1;
            }
            if(countzero<count0){
                countzero=count0;
            }
        }
        if(countone>countzero){
            return countone;
        }
        else{
            return countzero;
        }
    }
};
// second largest element gfg
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int secondlargest=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if((arr[i]!=max)&&(arr[i]>secondlargest)){
                secondlargest=arr[i];
            }
        }
        return secondlargest;
    }
};