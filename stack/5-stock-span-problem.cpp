/*
    Stock Span
    Stack Question 5
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define line cout << '\n';
int32_t main () {
    // IDEA : before any day, number of consecutive smaller or equal to days
    vi A {100,80,60,70,60,75,85}; vi Answer {1,1,1,2,1,4,6}; // TC 1
    int N = A.size ();
    vi Result;
    // ---------------------------------------
    // USE : Nearest Greater to left. index of i - index of nearest greater to left.
    stack <int> s;
    vi idx; // to store index of Nearest greater to left
    for (int i=0;i<N;i++) {
        
        s.push(A[i]);
    }
    // ---------------------------------------
    // Brute Force
    // for (int i=0;i<N;i++) {
    //     int count = 0;
    //     for (int j=i;j>=0;j--) { // stack alert
    //         if (A[j] <= A[i]) count++;
    //         else break;
    //     }
    //     Result.pb(count);
    // }
    if (Result == Answer) cout << "TC Passed";
    else cout << "TC Fail";
    // line for (int i:Result) cout << i << " ";
}