#include <bits/stdc++.h>
#include <chrono>
using namespace std;

vector<long long> memo(102);
long long fib_memo(long long n){
    if(n<=2){
        if(memo[n]){
            return memo[n];
        }
        else{
            memo[n] = 1;
            return memo[n];
        }
    }
    else{
        if(memo[n]){
            return memo[n];
        }
        else{
            memo[n] = fib_memo(n-2) + fib_memo(n-1);
            return memo[n];
        }
    }
}

int main(){
    int n;
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    long long ans = fib_memo(n);
    auto end = chrono::high_resolution_clock::now();
    cout<<"Fib = "<< ans <<endl;
    chrono::duration<double, milli> elapsed = end - start;
    cout<<"Execution time: "<< elapsed.count()<< " ms\n";
    return 0;
}