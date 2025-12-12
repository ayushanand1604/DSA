// kth number which is numbers not divisible by n
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = k + ((k - 1) / (n - 1));
        cout << ans <<endl;
    }
    return 0;
}
// sum of round numbers
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        vector<int> ans;
        cin>>n;
        int place = 1;
        int count=0;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                count++;
                ans.push_back(digit*place);
            }
            n=n/10;
            place=place*10;
        }
    cout<<count<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
}
//By ayush_anand123, contest: Codeforces Round 790 (Div. 4), problem: (A) Lucky?
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    int last=0;
    int first=0;
    int count1=0;
    while(n>0){
        if(count1<3){
            last=last+n%10;
            count1++;
            n=n/10;
            
        }
        else{
           first=first+n%10;
           n=n/10;
        }
    }
    if(last==first){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	}
    return 0;
}
// By ayush_anand123, contest: Codeforces Round 790 (Div. 4), problem: (B) Equal Candies
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]-min);
    }
    cout<<sum<<endl;
	}
    return 0;
}
//By ayush_anand123, contest: Codeforces Round 806 (Div. 4), problem: (A) YES or YES?
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        if(s=="yes"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}