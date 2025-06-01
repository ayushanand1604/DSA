// #include <iostream>
// using namespace std;
// void greetings(){
//     cout<<"Hello\n";
//     cout<<"How are you?\n";
// }
// int main(){
//     greetings();
//     cout<<"Hey\n";
//     greetings();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// void usa(){
//     cout<<"You are in USA\n";
//     return;
// }
// void india(){
//     cout<<"You are in India\n";
//     usa();
// }
// int main(){
//     cout<<"You are in Namma Bengaluru\n";
//     india();
//     return 0;
// }    
// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     // int m,n;
//     // cin>>m>>n;
//     // cout<<sum(m,n);
//     cout<<sum(2,3);
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     cout<<sqrt(4);
//     cout<<pow(2,3);
//     cout<<abs(-4);
//     cout<<log(2);
//     cout<<cbrt(27);
//     cout<<min(87,65);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int afact=factorial(a);
//     int bfact=factorial(b);
//     int abfact=factorial(a-b);
//     int ans=afact/(bfact*abfact);
//     cout<<ans;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cin>>a>>b;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b;
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
    return 0;
}
