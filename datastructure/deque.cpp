// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
     deque<int>q;
     q.push_front(10);
     q.push_back(20);
     q.push_front(30);
     q.push_back(40);
     q.push_back(50);
     q.pop_back();
     q.pop_front();
     cout<<q[2];
     cout<<q.front();
     cout<<q.back();
    return 0;
}
