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
// halloween sale
#include <bits/stdc++.h>
using namespace std;
int main() {
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int fp;
    int sum=0;
    int count1=0;
    while(p>=m){
        sum=sum+p;
        if(sum<s){
            count1++;
        }
        fp=p-d;
        p=fp;
        
    }
    while(sum<=s){
        sum=sum+m;
        if(sum<=s){
            count1++;
        }
    }
    cout<<count1<<endl;


}
// Sherlock and Squares
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    for(int x=0;x<q;x++){
        int a,b;
        cin>>a>>b;
        int count;
        float lowerlimit=sqrt(a);
        float upperlimit=sqrt(b);
        int z= lowerlimit;
        int y= upperlimit;
        if(((z-lowerlimit)==0)||((y-upperlimit)==0)){
            count=(upperlimit-lowerlimit)+1;
        }
        else if(((z-lowerlimit)!=0)&&((y-upperlimit)!=0)){
            count=y-z;
        }
        else{
            count=ceil(upperlimit-lowerlimit);
        }
        cout<<count<<endl;
    }
  return 0;
}
// Time in words
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string timeInWords(int h, int m) {
    vector<string> nums = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six",
        "twenty seven", "twenty eight", "twenty nine"
    };

    if (m == 0) {
        return nums[h] + " o' clock";
    } else if (m == 15) {
        return "quarter past " + nums[h];
    } else if (m == 30) {
        return "half past " + nums[h];
    } else if (m == 45) {
        return "quarter to " + nums[(h % 12) + 1];
    } else if (m < 30) {
        if (m == 1) {
            return nums[m] + " minute past " + nums[h];
        } else {
            return nums[m] + " minutes past " + nums[h];
        }
    } else { // m > 30
        if (60 - m == 1) {
            return nums[60 - m] + " minute to " + nums[(h % 12) + 1];
        } else {
            return nums[60 - m] + " minutes to " + nums[(h % 12) + 1];
        }
    }
}

int main() {
    int h, m;
    cin >> h >> m;
    cout << timeInWords(h, m) <<endl;
    return 0;
}
// Jumping on the clouds
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int i=0;
    while(i<n-1){
        if(arr[i+2]==0&&i+2<n){
            i=i+2;
        }
        else{
            i=i+1;
        }
        count++;
    }
    cout<<count;

}
// Chocolate Feast
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int y = 0; y < t; y++) {
        int n, c, m;
        cin >> n >> c >> m;

        int z = n / c;   
        int count = 0;
        int a, b;
        int i = z;

        if (z < m) {
            cout << z << endl;
        } else {
            while (i >= m) {
                a = i % m;      
                b = i / m;    
                count =count+ b;
                i = a + b;     
            }
            cout << count + z << endl;
        }
    }

    return 0;
}
// Lisa Workbook
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,j,x;
    cin>>n>>k;
    int page = 1;
    int count=0;
    for (i=1 ; i<=n ; i++) {
        cin>>x;
        for (j=1 ; j<=x ; j++) {
            if (page == j){
            count++;
            }
            if (j % k == 0) {
                page++;
            }
        }
        if (x % k != 0) {
            page++;
        }
        
    }
    cout<<count;
    return 0;
}
// Circular Array Rotation
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q;
    cin >>n>>k>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k=k%n;
    for(int i=0;i<q;i++){
        int queris;
        cin>>queris;
        int a=(queris-k+n)%n;
        cout<<arr[a]<<endl;
    }
    return 0;
}
// Jumping of the Cloud Revisted 
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int e=100;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    i=i+k;
    if(n==k){
        if(arr[i%n]==0){
            e=e-1;
        }
        else if(arr[i%n]==1){
            e=e-3;
        }
        
    }
    else{while(i!=0){
        if(arr[i%n]==0){
            e=e-1;
        }
        else if(arr[i%n]==1){
            e=e-3;
        }
        i=i+k;
        i=i%n;
    }
    if(arr[i]==0)e=e-1;
    if(arr[i]==1)e=e-3;}
    cout<<e;
    

}
// ENCRYPTION
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int l=s.length();
    float z=sqrt(l);
    int rows=floor(z);
    int column=ceil(z);
    if (rows * column < l){
        rows++;
    }
    for (int i = 0; i<column; i++) {
        for (int j = 0; j<rows; j++) {
            int index = j*column+i;
            if (index < (l)){
                cout << s[index];
            }
        }
        cout << " ";
    }
    return 0;
}
// Fair Rations
#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(int i=0;i<n-1;i++){
    if((arr[i]%2)!=0){
        arr[i]+=1;
        arr[i+1]+=1;
        count+=2;
    }
}
 if((arr[n-1]%2)!=0){
     cout<<"NO";
 }
 else{
     cout<<count;
 }
}
// Beautiful Triplets
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int count=0;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int b=a+d;
        int c=a+2*d;
            if (binary_search(arr.begin(), arr.end(), b) &&
            binary_search(arr.begin(), arr.end(), c)) {
            count++;
        }
    }
    cout<<count<<endl;


}
// Jumping on the Clouds
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int i=0;
    while(i<n-1){
        if(arr[i+2]==0&&i+2<n){
            i=i+2;
        }
        else{
            i=i+1;
        }
        count++;
    }
    cout<<count;

}
// Picking Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   int maxcount=0;
   for(int i=0;i<n;i++){
    int currentcount=1;
       for(int j=i+1;j<n;j++){
           if(abs(arr[i]-arr[j])<=1){
               currentcount++;
           }
           else{
            break;
           }
       }
       if (currentcount > maxcount) {
            maxcount=currentcount;
        }
   }
    cout<<maxcount<<endl;
    return 0;
}

// Cut the sticks
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
while(true){
    int count=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count++;
            if((min>arr[i])){
                min=arr[i];
            }
        }
    }
    if(count==0){
        break;
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[i]=arr[i]-min;    
        }
    }    
}
return 0;
}