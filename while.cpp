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
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<fact<<endl;
    }
    return 0;
}