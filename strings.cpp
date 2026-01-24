// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter a string: ";
//     //cin>>s;
//     getline(cin,s);
//     cout<<s;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s= "Ayush Anand";
//     // cout<<s[0];
//     cout<<s<<endl;
//     s[0]='M';
//     s[2]='D';
//     cout<<s<<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s="ayush";
//     cout<<s.length();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s=" cow is an animal with four legs";
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//         count++;

//     }
    
// }
// cout<<count;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s="ayush";
//     cout<<s.length()<<endl;
//     //s.append(" anand");
//     s="anand"+s;
//     //s=s+"anand";
//     cout<<s.length()<<endl;
//     cout<<s<<endl;
//     s.pop_back();
//     cout<<s<<endl;
//     s.pop_back();
//     cout<<s<<endl;
//     //s.push_back('a');
//     //cout<<s<<endl;
//     //s.push_back('g');
//     //cout<<s<<endl;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     string s=" i am a aspirant software engineer";
//     cout<<s<<endl;
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    string s = "raghav";
    cout<<s<<endl;
    reverse(s.begin(),s.begin()+3);
    // int n=s.length();
    // int i=0;
    // int j=n/2-1;
    // while(i<j){
    //     char temp=s[i];
    //     s[i]=s[j];
    //     s[j]=temp;
    //     i++;
    //     j--;
    // }
    cout<<s<<endl;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
//     string firstName = "John ";
// string lastName = "Doe";
// string fullName = firstName +  lastName;
// cout << fullName;
// string x="10";
// string y="20";
// string z=x+y;
// cout<<z;
// string txt="nefdbbfuvvuvfuvygfyufrvfvfiyfv";
// cout<<txt.size();
// string myString="Hello";
// cout<<myString[1]<<endl;
// myString[0]='J';
// cout<<myString;
//string mystring="Hello";
//cout<<mystring.at(0)<<endl;
//cout<<mystring.at(1)<<endl;
//cout << mystring.at(mystring.length() - 1)<<endl;
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main(){
cout<<sqrt(64)<<endl;
cout<<round(2.6)<<endl;
cout<<log(2)<<endl;
cout<<max(5,10)<<endl;
cout<<min(5,10)<<endl;
return 0;
}
// Chessboard string leetcode
class Solution {
public:
    bool squareIsWhite(string s) {
        if((s[1]%2!=0)&&((s[0]=='a')||(s[0]=='c')||(s[0]=='e')||(s[0]=='g'))) return false;
        else if((s[1]%2==0)&&((s[0]=='b')||(s[0]=='d')||(s[0]=='f')||(s[0]=='h'))) return false;
        else if((s[1]%2==0)&&((s[0]=='a')||(s[0]=='c')||(s[0]=='e')||(s[0]=='g'))) return true;
        else if((s[1]%2!=0)&&((s[0]=='b')||(s[0]=='d')||(s[0]=='f')||(s[0]=='h'))) return true;
        return true;
    }
};
// reverse of words in a string leetcode
class Solution {
public:
    string reverseWords(string s) {
        string result;
        for(int i=s.size()-1;i>=0;i--){
            result=result+s[i];
        }
        return result;
    }
};