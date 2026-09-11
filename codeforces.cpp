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
//By ayush_anand123, contest: Codeforces Round 806 (Div. 4), problem: (B) ICPC Balloons
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int seen[26]={0};
        int balloons=0;
 
        for(int i=0;i<s.length();i++){
            int index=s[i]-'A';
            if(seen[index]==0){
                balloons+=2;
                seen[index]=1;
            } 
            else{
                balloons+=1;
            }
        }
 
        cout<<balloons<<endl;
    }
    return 0;
}
//By ayush_anand123, contest: Codeforces Round 898 (Div. 4), problem: (B) Good Kid
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
        int index=-1;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
                index=i;
            }
        }
        a[index]+=1;
        int product=1;
        for(int i=0;i<n;i++){
            product*=a[i];
        }
        cout<<product<<endl;
    }
    return 0;
} 
//By ayush_anand123, contest: Codeforces Round 481 (Div. 3), problem: (A) Remove Duplicates, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> ans;
    map<int,int> mpp;
    int x=ans.size();
    for(int i=n-1;i>=0;i--){
        if(mpp[arr[i]]==0){
            ans.push_back(arr[i]);
            mpp[arr[i]]++;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//By ayush_anand123, contest: Codeforces Round 481 (Div. 3), problem: (B) File Name, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='x'){
            count++;
            if(count>=3){
                ans++;
            }
        }
        else count=0;
    }    
    cout<<ans;
}
// By ayush_anand123, contest: Codeforces Round 486 (Div. 3), problem: (A) Diverse Team,
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(mpp.count(arr[i])==0){
            mpp[arr[i]]=i+1;
            ans.push_back(i+1);
        }
    }
    if(ans.size()<k){
        cout<<"NO"<<endl;
    } 
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//By ayush_anand123, contest: Codeforces Round 479 (Div. 3), problem: (B) Two-gram, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>freq;
    string ans="";
    int maxmcount=0;
    for(int i=0;i<n-1;i++){
        string twogram=s.substr(i,2);
        freq[twogram]++;
        if(freq[twogram]>maxmcount) {
            maxmcount=freq[twogram];
            ans=twogram;
        }
    }
    cout<<ans<<endl;
    return 0;
}


By ayush_anand123, contest: Codeforces Round 912 (Div. 2), problem: (A) Halloumi Boxes, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2){
            cout<<"YES\n";
        }
        else{
            bool sorted=true;
            for(int i=1;i<n;i++){
                if(arr[i]<arr[i-1]){
                    sorted=false;
                    break;
                }
            }
            cout<<(sorted ? "YES\n": "NO\n");
        }    
    }
}

By ayush_anand123, contest: Educational Codeforces Round 158 (Rated for Div. 2), problem: (A) Line Trip, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=arr[0];
        for(int i=1;i<n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        ans=max(ans,2*(x-arr[n-1]));
        cout<<ans<<endl;
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 911 (Div. 2), problem: (A) Cover in Water, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        bool threeDots = false;
        for(int i=0;i<n;i++){
            if(s[i]=='.') count++;
            if(i>=2 && s[i]=='.' && s[i-1]=='.' && s[i-2]=='.') threeDots=true;
        }
        if(threeDots) cout<<2<<endl;
        else cout<<count<<endl;
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 909 (Div. 3), problem: (A) Game with Integers, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<(arr[0]==1 ? "YES":"NO") <<endl;
    }
    return 0;
}

//By ayush_anand123, contest: Codeforces Round 903 (Div. 3), problem: (A) Don't Try to Count, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans=0;
        while(x.find(s) >= x.size() && x.size()<=100){
            x+=x;
            ans++;
        }
        if(x.find(s)<x.size()) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}


// By ayush_anand123, contest: Codeforces Round 902 (Div. 2, based on COMPFEST 15 - Final Round), problem: (A) Goals of Victory, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum += arr[i];
        }
        cout<<-sum<<endl;
    }
    return 0;
}

//By ayush_anand123, contest: Codeforces Round 898 (Div. 4), problem: (C) Target Practice,
 #include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        for(int i = 0;i < 10; i++){
            for(int j = 0;j < 10; j++){
                char c;
                cin >> c;
                if(c=='X'){
                    int ring = min({i,j,9-i,9-j}) + 1;
                    ans += ring;
                }    
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

//By ayush_anand123, contest: COMPFEST 15 - Preliminary Online Mirror (Unrated, ICPC Rules, Teams Preferred), problem: (A) Ambitious Kid, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimumOperations=INT_MAX;
    for(int i=0;i<n;i++){
        minimumOperations=min(minimumOperations,abs(arr[i]-0));
    }
    cout<<minimumOperations<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int minimum = *min_element(arr.begin(),arr.end());
        vector<int> b,c;
        for(auto it: arr){
            if(it == minimum) b.push_back(it);
            else c.push_back(it);
        }
        if(c.empty()) {
            cout<<-1<<endl;
            continue;
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(int x :b){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int y :c){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}


By ayush_anand123, contest: Codeforces Round 893 (Div. 2), problem: (A) Buttons, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c % 2 == 0){
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(b>a) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 891 (Div. 3), problem: (A) Array Coloring, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(auto it:arr){
            sum += it;
        }
        if(sum % 2 == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 887 (Div. 2), problem: (A) Desorting, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int difference = INT_MAX;
        for(int i = 1;i < n;i++){
            difference = min(difference,arr[i]-arr[i-1]);
        }
        if(difference < 0) cout<<0<<endl;
        else cout<< (difference/2)+1 <<endl;
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 879 (Div. 2), problem: (A) Unit Array, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        int count = 0;
        int positiveOnes = 0;
        int negativeOnes = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] == 1) positiveOnes++;
            else negativeOnes++;
        }
        while(positiveOnes < negativeOnes || negativeOnes % 2 == 1){
            count++;
            negativeOnes --;
            positiveOnes ++;
        }
        cout<<count<<"\n";
    }
    return 0;
}

By ayush_anand123, contest: Educational Codeforces Round 149 (Rated for Div. 2), problem: (A) Grasshopper on a Line, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >>x>>k;
        if(x % k !=0){
            cout<<1<<"\n";
            cout<<x<<"\n";
        }
        else{
            cout<<2<<"\n";
            cout<<x-1<<" "<<1<<"\n";
        }
    }
    return 0;
}

By ayush_anand123, contest: Educational Codeforces Round 146 (Rated for Div. 2), problem: (A) Coins, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<(k % 2 == 1 || n % 2 == 0 ? "YES\n":"NO\n");
    }
    return 0;
}


By ayush_anand123, contest: Codeforces Round 858 (Div. 2), problem: (A) Walking Master, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans = 0;
        int yDifference = y2-y1;
        if(yDifference < 0){
            cout<<"-1"<<endl;
            continue;
        }
        x1+=yDifference;
        ans+=yDifference;
        int xDifference = x2-x1;
        if(xDifference > 0){
            cout<<"-1"<<endl;
            continue;
        }
        ans += abs(xDifference);
        cout<<ans<<endl;
    }
    return 0;
}

By ayush_anand123, contest: Codeforces Round 849 (Div. 4), problem: (C) Prepend and Append, Accepted, #, Copy
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        int left = 0;
        int right = n-1;
        while(left < right && s[left]!= s[right]){
            left++;
            right--;
        }
        cout<<right-left+1<<endl;
    }
    return 0;
}