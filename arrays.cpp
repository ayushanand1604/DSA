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
// Second largest element
#include <iostream>
using namespace std;
int main(){
    int arr[6]={9,63,34,10,5,6};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secondmax=0;
    for(int i=0;i<6;i++){
        if((arr[i]>secondmax)&&((arr[i])!=max)){
            secondmax=arr[i];
        }
    }
    cout<<secondmax;
}