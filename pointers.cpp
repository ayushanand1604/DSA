// #include <iostream>
// using namespace std;
// int main(){
//     int x=3;
//     cout<<&x<<endl;
//     //0x16b61b2f8
//     int y=3;
//     cout<<&y;
//     //0x16b4fb2f4%
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int x=3;
//     int *p;
//     p=&x;
//     cout<<&x<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int x=3;
//     int *p=&x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
//     cout<<x<<endl;
//     cout<<*p<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 12;
//     int *ptr=&x;
//     cout<<x<<endl;
//     *ptr=23;
//     cout<<x<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=12;
    int y=13;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;

}