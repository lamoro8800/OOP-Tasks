#include <bits/stdc++.h>
using namespace std;

template <class T>
T fib(T n){
    T ans[n+1];
    ans[0] = 0;//fib[0] = 0
    ans[1] = 1;//fib[1] = 1
    for (int i = 2; i <= n; i++)
        //fib[n] = fib[n-1] + fib[n-2]
        ans[i] = ans[i-1]+ans[i-2];
    return ans[n];
}

void solve(){
    cout << "Fibonacci of " << 6 << " : "  << fib <int>(6) << '\n';
    cout << "Fibonacci of " << 10 << " : "  << fib <long long>(10) << '\n';
    cout << "Fibonacci of " << 100 << " : "  << fib <long long>(100) << '\n';
}
int main(){
    solve ();

}
