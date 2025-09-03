// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<i<<endl;
//         i++;
//     } while(i<=10);
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int x=1;
//     while(x==1){
//         x=x-1;
//         cout<<x<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int count =0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int rem=n%10;
//         sum=sum+rem;
//         n=n/10;
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int product=1;
//     while(n!=0){
//         int rem=n%10;
//         product=product*rem;
//         n=n/10;
//     }
//     cout<<product;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int rev=0;
//     while(n!=0){
//         int ld=n%10;
//         rev=rev*10+ld;
//         n=n/10;
//     }
//     cout<<rev;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int fact=1;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     while(n!=0){
//         fact=fact*n;
//         n--;
//     }
//     cout<<fact;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//         cout<<fact<<endl;
//     }
//     return 0;
// }
// binary search
#include <iostream>
#include <vector>
using namespace std;
bool binary(vector<int>v,int key){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=((high-low)/2)+low;
        if(v[mid]==key){
            return true;
        }
        if(v[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }    
    }
    return false;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    int key;
    cin>>key;
    if(binary(v,key)){
        cout<<key<<" found";
    }
    else{
        cout<<key<<"not found";
    }
}
// binary search
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
    int target=25;
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=((high-low)/2)+low;
        if(v[mid]==target){
            cout<<target<<" found";
            break;
            return 0;
        }
        if(v[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<target<<" not found";
    return 0;
}