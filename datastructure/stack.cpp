#include <bits/stdc++.h>
using namespace std;

int main() {
     stack<int>s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.pop();
     cout<<s.top();
    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
     queue<int>q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     q.pop();
     cout<<q.front();
    return 0;
}