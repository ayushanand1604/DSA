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