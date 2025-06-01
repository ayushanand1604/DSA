#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=6;
    arr[0][1]=1;
    arr[0][2]=2;
    arr[1][0]=4;
    arr[1][1]=3;
    arr[1][2]=5;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}
// //MarksRoll
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[4][2]={{76,81},{13,75},{82,91},{88,90}};
//     int mx=INT_MIN;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             mx=max(mx,arr[i][j]);
//         }
//     }
//     cout<<mx;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5][5];
//     for(int i=0;i<=4;i++){
//         for(int j=0;j<5;j++){
//             arr[i][j]=10;
//         }
//     }
//     for(int i=0;i<=4;i++){
//         for(int j=0;j<5;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){

// }