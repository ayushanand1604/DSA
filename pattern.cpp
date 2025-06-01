// #include <iostream>
// using namespace std;
// int main(){
//    int i,j;
//    for(i=1;i<=3;i++){
//     for(j=1;j<=3;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
//    return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the number of rows:";
//     cin>>m;
//     int n;
//     cout<<"Enter the number of columns:";
//     cin>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//     }
//     cout<<endl;}
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the number of rows:";
//     cin>>m;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=m;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the number of rows:";
//     cin>>m;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=m;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//      for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<(char)(i+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=4;j>=i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<2*j-1<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0) cout<<"1 ";
//             else cout<<"0 ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     int mid=n/2+1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==mid|| j==mid) cout<<"* ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }