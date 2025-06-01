// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<"Hello World\n";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i << " Hello World\n";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=2;i<=100;i=i+2){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=1;i<=10;i++){
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }
//     return 0;
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=4;i<=3*n-1;i+=3){
//         cout<<i<<" ";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=3;i<=n;i*=4){
//         cout<<i<<" ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int f=1;
//     for(int i=1;i<n;i++){
//         if(n%i==0) f =i;
//     }
//     cout<<f;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=n/2;i>=1;i--){
//         if(n%i==0){
//             cout<<i;
//             break;
//     }
// }
// return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) 
        count++;

    }
    if(count==2){
        cout<<"Prime";
}
    else{
        cout<<"composite";
    }
    return 0;
}
