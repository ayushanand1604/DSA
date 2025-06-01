// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n>=0){
//         cout<<"The absolute value of "<<n<<" is: "<<n;
//     }
//     else{
//         cout<<"The absolute value of "<<-n<<" is: "<<-n;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int cp,sp;
//     cout<<"Enter the Value of cp: ";
//     cin>>cp;
//     cout<<"Enter the Value of sp: ";
//     cin>>sp;
//     if(cp>sp){
//         cout<<"The seller has made a loss of "<<cp-sp;
//     }
//     else if(sp>cp){
//         cout<<"The seller has made a profit of "<<sp-cp;
//     }
//     else{
//         cout<<"The seller has neither made a loss nor a profit";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n>99&&n<1000){
//         cout<<"The "<<n<<" is a 3 digit number";
//     }
//     else{
//         cout<<"The "<<n<<" is not a 3 digit number";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     if(n%3==0||n%5==0){
//         if(n%3==0){
//             cout<<"The number is divisible by 3";
//         }
//         else{
//             cout<<"The number is divisible by 5";
//         }
//     }
//     else{
//         cout<<"The number is not divisible by 3 or 5";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter 1st side:";
//     cin>>a;
//     cout<<"Enter 2nd side:";
//     cin>>b;
//     cout<<"Enter 3rd side:";
//     cin>>c;
//     if((a+b)>c && (b+c)>a && (c+a)>b){
//         cout<<"The triangle is valid";
//     if(a==b&&b==c){
//         cout<<"The triangle is equilateral";
//     }
//     else if(a==b||b==c||a==c){
//         cout<<"The triangle is isosceles";
//     }
//     else{
//         cout<<"The triangle is scalene";
//     }
// }
//     else{
//         cout<<"The triangle is not valid";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     cout<<"Enter the value of c: ";
//     cin>>c;
//     if(a>b&&a>c){
//         cout<<"The largest number is: "<<a;
//     }
//     else if(b>a&&b>c){
//         cout<<"The largest number is: "<<b;
//     }
//     else{
//         cout<<"The largest number is: "<<c;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter the value of x: ";
//     cin>>x;
//     cout<<"Enter the value of y: ";
//     cin>>y;
//     if(x==0 && y==0){
//         cout<<"The point is at origin";
//     }
//     else if(x>0 && y>0){
//         cout<<"The point lies in 1st quadrant";
// }
// else if(x<0 && y>0){
//     cout<<"The point lies in 2nd quadrant";
// }
// else if(x<0 && y<0){
//     cout<<"The point lies in 3rd quadrant";
// }
// else{
//     cout<<"The point lies in 4th quadrant";
// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     (n%2==0)?cout<<"The number is even":cout<<"The number is odd";
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int a,b,choice,result;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin>>choice;
    switch(choice){
        case 1:result=a+b;
        break;
        case 2:result=a-b;
        break;
        case 3:result=a*b;
        break;
        case 4:result=a/b;
        break;
        default:cout<<"Invalid choice";
        break;
    }
    cout<<"The result is: "<<result;
    return 0;
}