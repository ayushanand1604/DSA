// #include <iostream>
// using namespace std;
// int main(){
    // cout<<"Hello World\n";
    // cout<<"I am learning C++\n";
    // cout<<"And this is my first program"<<endl;
    // cout<<"My name is Ayush\n";
    // cout<<4*5<<endl;
    // int x,y;
    // x=9;
    // y=5;
    // cout<<x*y;
    // single line comment
    /*Multi 
    line
     comment*/
//     int x=5;
//     cout<<x<<endl;
//     x=8;
//     cout<<x<<endl; 
//     x+=3;
//     cout<<x<<endl;
//     x-=3;
//     cout<<x<<endl;
//     x*=3;
//     cout<<x<<endl;
//     x/=3;
//     cout<<x<<endl;
//     x%=3;
//     cout<<x<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
    // int x=7,y=2;
    // cout<<x+y<<endl;
    // cout<<x-y<<endl;
    // cout<<x*y<<endl;
    // cout<<x/y<<endl;
    // cout<<x%y<<endl;
    // return 0;
//     int x=4;
//     cout<<x<<endl;
//     cout<<x++<<endl;
//     cout<<x<<endl;
//     cout<<--x<<endl;
//     cout<<x<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     float a;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     float area=3.14*a*a;
//     cout<<"The area of circle is: "<<area;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     float p;
//     cin>>p;
//     float r;
//     cin>>r;
//     float t;
//     cin>>t;
//     float si;
//     si=(p*r*t)/100;
//     cout<<"S.I. is ="<<si<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"The square of "<<a<<" is: "<<a*a;
//     return 0;
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     // MODULUS OPERATOR
//     // a%b=a[if a<b]
//     // a%a=0
//     // a%(-b)=a%b
//     //(-a)%b=-[a%b]
//     int x;
//     cin>>x;
//     cout<<x%2;
//     return 0;
//     float y;
//     cin>>y;
//     cout<<y/3;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
//         cout<<"The character is a vowel";
//     }
//     else{
//         cout<<"The character is a consonant";
//     }
//     return 0;


// }
// ASCII VALUES
// a=97      A=65;   '0'=48;
// b=98      B=66;   '1'=49;
// c=99      C=67;   '2'=50;
// d=100     .....   .......
// e=101     .....   .......
// .....     Z=90;   '9'=57;
// .....
// .....
// z=122
// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     cout<<(int)ch;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 int num=n;
 int rev=0;
 while(num>0){
     rev=rev*10+num%10;
     num=num/10;
 }
 if(rev==n){
     cout<<"yes";
 }
 else{
     cout<<"no";
 }
}
// Sorting an a array
#include <iostream>
using namespace std;
int main(){
    int n,i,temp=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<" The sorted array is : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}