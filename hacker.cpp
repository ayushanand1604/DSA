// // Student grading marks
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>=38){
//         if(arr[i]%5==3){
//             arr[i]=arr[i]+2;}
            
//            if(arr[i]%5==4){
//               arr[i]=arr[i]+1;
//           }
//         }
//     }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<endl;
//         }
            
//         }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    long long  sum=0;
//     for (int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     int mx=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx){
//         mx=arr[i];
//     }
// } 
//      long long a= sum-mx;
//     int mn=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<mn){
//         mn=arr[i];
//     }
// }
//    long long b= sum-mn;
//     cout<<a<<" "<<b;
    
    
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int s,t;
//     cin>>s;
//     cin>>t;
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int m,n;
//     cin>>m;
//     cin>>n;
//     int arr[m];
//     for(int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     int brr[n];
//     for(int i=0;i<n;i++){
//         cin>>brr[i];
//     }
//     int count1=0;
//     int c;
//     for(int i=0;i<m;i++){
//         c=arr[i]+a;
//         if(c>=s&&c<=t)
//       {
//           count1 ++;
//       }
    
//     }
//     cout<<count1<<endl;
//      int count2=0;
//      int d;
//      for(int i=0;i<n;i++){
//       d=brr[i]+b;
//       if(d>=s&&d<=t){
//           count2++;
//       }
//     }
//     cout<<count2;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j,n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             cout<<" ";
//         }
//         for(j=1;j<=i;j++){
//             if(i%2!=0)
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,num1=0,num2=1,num3=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<num3<<" ";
//         num3=num1+num2;
//         num2=num1;
//         num1=num3;
        
//     }
// }    
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//      map<int,int> num;
//     int ans = 0;
//     for(int count:arr){
//         num[count]++;
        
//     }

//     for(auto it:num){
//         ans +=it.second/2;
//     }
//  cout<<ans;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int n;
// 	cin>>n;
//  vector<int>arr(n);
//  for(int i=0;i<n;i++){
//      cin>>arr[i];
//  }
//  map<int,int>num;
//  for(int i=0;i<arr.size();i++){
//      num[arr[i]]++;
//  }
//  for(auto it:num){
//       cout << it.first << " " << it.second
//         << endl;
//  }

// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//    int n;
//    cin>>n;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    sort(arr.begin(),arr.end());
//    int count=0;
//    int max=0;
//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//            if(abs(arr[i]-arr[j])<=1){
//                count++;
//            }
//        }
//    }
//     cout<<count;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	// your code goes here
// 	int n;
// 	cin>>n;
//  vector<int>arr(n);
//  for(int i=0;i<n;i++){
//      cin>>arr[i];
//  }
//  map<int,int>num;
//  for(int i=0;i<arr.size();i++){
//      num[arr[i]]++;
//  }
// //  for(auto it:num){
// //       cout << it.first << " " << it.second
// //         << endl;
// //  }
//   int max=0;
//   int max2=0;
//   for(auto it:num){
//     if(it.second>max){
//         max=it.second;
//         max2=it.first;
//     }
//   }
//   for(auto it:num){
//     if(it.second==max&&it.first<max2){
//        max2=it.first;
//     }
//   }
//   cout<<max2;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int c=INT_MAX;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]==arr[i]){
//             c=min(c,abs(j-i));
//             }
//         }
//     }
//      if(c == INT_MAX) {
//         c = -1;
//     }
//     cout <<c;
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int b,n,m;
//     cin>>b>>n>>m;
//     int arr1[n];
//     int arr2[m];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     for(int j=0;j<m;j++){
//         cin>>arr2[j];
//     }
//     int max=-1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         int sum=arr1[i]+arr2[j];
//         if(sum<=b&&sum>max){
//             max=sum;
//     }
    
//     }
//     }
//     cout<<max;

// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	string s;
// 	getline(cin,s);
// 	int count=0;
// 	string t;
// 	getline(cin,t);
// 	int k;
// 	cin>>k;
// 	for(int i=s.length()-1;i>0;i--){
// 	     s.pop_back();
// 	    if(s!=t){
// 	        count++;
// 	    }
// 	    else{break;}
// 	}
//    cout<<count;
// }
// //Hurdle race
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx){
//             mx=arr[i];
//         }
       
//     }
//     if(mx<=k){
//         cout<<0;
//     }
//     else{
//     cout<<abs(mx-k);}
    
//     return 0;
// }
// // DrawinG BOOK
// #include <iostream>
// using namespace std;
// int main(){
//     int n,p;
//     cin>>n>>p;
//     int c1,c2;
//     c1=p/2;
//     c2=n/2-p/2;
//     if(c1>c2){
//         cout<<c2;
//     }
//     else{cout<<c1;}
//     return 0;
// }
// // UTOPIAN TREE
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         int m=1;
//         for(int j=1;j<=n;j++){
//         if(j%2==0){
//                 m=m+1;
//             }
//             else{m=2*m;}
//     }
//     cout<<m<<endl;
//     }
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int c;
        int count=0;
        int num=n ;
        while(num>0){
        c=num%10;
        if(c!=0 &&n%c==0){
       count++;
    }
        num=num/10;
    }

     cout<<count<<endl;
    }
    
}
// Breaking the records
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int mx=arr[0];
	int min=arr[0];
	int count1=0;
	int count2=0;
	for(int i=1;i<n;i++){
	    if(arr[i]>mx){
	        count1++;
	        mx=arr[i];
	    }
	    if(arr[i]<min){
	        count2++;
	        min=arr[i];
	    }
	}
	cout<<count1<<" ";
	cout<<count2;

}
// Sequence equation
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<=n;i++){
        cin>>p[i];
    }
    int c;
    for(int a=1;a<=n;a++){
        for(int i=0;i<n;i++){
            if(p[i]==a){
                    c=i+1;}}
        for(int i=0;i<n;i++){
            if(p[i]==c){
                
                cout<<i+1<<endl;
            }
            
        }
        }         
        }
// LIBRARY FINE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    int fine=0;
    if(y1>y2){
        fine=10000;
    } 
    else if(y1==y2){
    
    if((d1>d2)&&(m1==m2)){
        fine=15*(d1-d2);
    }
    else if(m1>m2){
        fine=500*(m1-m2);
    }
    }
    cout<<fine;
}
// DAY OF THE PROGRAMMER
#include <bits/stdc++.h>
using namespace std;

int main() {
   int y;
   cin>>y;
   if(y==1918){
    cout<<"26.09.1918";
   }
   else if(y<1918){
    if(y%4==0){cout<<"12.09."<<y;}
    else{cout<<"13.09."<<y;}
   }
    else{
        if((y%400==0)||(y%4==0&&y%100!=0))
        cout<<"12.09."<<y;
        else {
            cout<<"13.09."<<y;
        }
   }
}
// Service Lane
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    for(int a=0;a<t;a++){
    int i,j;
    cin>>i>>j;
    int min=arr[i];
    for(int x=i;x<=j;x++){
        if(arr[x]<min){
            min=arr[x];
        }
    }
    cout<<min<<endl;
    
}
}
// DESIGNER PDF VIEWER
#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   int h[26];
   for(int i=0;i<26;i++){
       cin>>h[i];}
       cin>>s;
       int max=0;
       for(char c:s){
           int x=c-'a';
           if(h[x]>max){
               max=h[x];}
       }
   
    cout<< s.length()*max<<endl;

}
// Taum Birthday Problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        long long b,w,bc,wc,z;
        cin >>b>>w>>bc>>wc>>z;
        if (bc+z < wc) {
            cout << bc*b+(bc+z)*w<<endl;
        } 
        else if (wc+z < bc) {
            cout<<(wc+z)*b+wc*w<<endl;
        }
         else {
            cout<<bc*b+wc*w<<endl;
        }
    }
    return 0;
}
// Equalise the array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 map<int,int>num;
 for(int i=0;i<arr.size();i++){
     num[arr[i]]++;
 }
 int highestrepeat=arr[0];
 int max=num[highestrepeat];
 for(auto it:num){
     if(it.second>max){
        max=it.second;
         highestrepeat=it.first;
     }
 }
 int count=0;
  for(int i=0;i<arr.size();i++){
     if(arr[i]!=highestrepeat){
         count++;
     }
 }

 cout<<count<<endl;
 return 0;
}