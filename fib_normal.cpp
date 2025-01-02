#include <bits/stdc++.h>
#include <chrono>
using namespace std;

int fib_normal(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fib_normal(n-1) + fib_normal(n-2);
    }
}

int main(){
    int n;
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    int ans = fib_normal(n);
    auto end = chrono::high_resolution_clock::now();
    cout<<"Fib = "<< ans <<endl;
    chrono::duration<double, milli> elapsed = end - start;
    cout<<"Execution time: "<< elapsed.count()<< " ms\n";
    return 0;
//    fib 7 took 0.0016 ms
//    fib 20 took 0.0325 ms
//    fib 30 took 4.179 ms
//    fib 40 took 319.12 ms
//    fib 50 took 42004.5 ms
}

